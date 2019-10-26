import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:my_flutter/duanzilist/duan_zi_entity.dart';
import 'package:simple_logger/simple_logger.dart';

final logger = SimpleLogger()..mode = LoggerMode.print;

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(
          primaryColor: Colors.grey,
          accentColor: Colors.white,
          primaryColorDark: Colors.black),
      home: MyHomePage(),
    );
  }
}

class MyHomePage extends StatefulWidget {
  @override
  _DuanZiListState createState() => _DuanZiListState();
}

class _DuanZiListState extends State<MyHomePage> {
  static const platform = const MethodChannel('wu.sea.flutter/duanziList');
  var duanziList = <DuanZiEntity>[];
  var loadMoreAble = true;

  @override
  Widget build(BuildContext context) {
    platform.setMethodCallHandler((call) {
      if (call.method == "initPage") {
        setState(() {
          duanziList.clear();
          List list = jsonDecode(call.arguments.toString());
          duanziList.addAll(
              list.map((item) => new DuanZiEntity.fromJson(item)).toList());
        });
      } else if (call.method == "showMoreData") {
        setState(() {
          List list = jsonDecode(call.arguments.toString());
          duanziList.addAll(
              list.map((item) => new DuanZiEntity.fromJson(item)).toList());
        });
      } else if (call.method == "disableLoadMore") {
        loadMoreAble = false;
      }
      return Future.value(Null);
    });

    if (duanziList.isEmpty) {
      return new Text(
        "Data is empty",
        textAlign: TextAlign.center,
        style: TextStyle(fontSize: 18),
      );
    }

    return Container(
        decoration: new BoxDecoration(color: Colors.white),
        child: new ListView.builder(
            itemCount: duanziList.length * 2,
            padding: const EdgeInsets.all(0.0),
            itemBuilder: (context, i) {
              if (i.isOdd) {
                return new Divider(
                  color: Colors.black,
                  height: 1,
                );
              }
              final index = i ~/ 2;
              logger.info(
                  "current list index is $index duanziList.length is ${duanziList.length}, load more able is $loadMoreAble");
              if (index >= duanziList.length - 1 && loadMoreAble) {
                logger.info("strat load next page data");
                // ...加载下一页
                platform.invokeMethod("loadMore");
              }
              return _buildRow(duanziList[index]);
            }));
  }

  Widget _buildRow(DuanZiEntity duanZiDetail) {
    dynamic header = Icon(Icons.insert_emoticon);
    if (duanZiDetail.header != null && duanZiDetail.header.isNotEmpty) {
      header = Image.network(
        duanZiDetail.header,
        width: 48,
        height: 48,
      );
    }
    var title = Container(
        margin: EdgeInsets.only(top: 10),
        child: Row(children: [
          Column(children: <Widget>[
            header,
            Container(
              margin: EdgeInsets.symmetric(horizontal: 10),
              width: 48,
              child: Text(
                duanZiDetail.name,
                textAlign: TextAlign.left,
                softWrap: false,
                overflow: TextOverflow.ellipsis,
                style: TextStyle(
                    fontSize: 11,
                    color: Colors.black,
                    fontWeight: FontWeight.bold,
                    decoration: TextDecoration.none),
              ),
            )
          ]),
          Expanded(
              child: Text(
            duanZiDetail.text,
            textAlign: TextAlign.left,
            softWrap: true,
            style: TextStyle(
                fontSize: 16,
                color: Colors.black87,
                fontWeight: FontWeight.bold,
                decoration: TextDecoration.none),
          ))
        ]));

    var topCommentsHeader = duanZiDetail.topCommentsHeader ??
        "https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1572086421630&di=6535e421fd3b1e91ddd27653a2adb458&imgtype=0&src=http%3A%2F%2Fimg.zcool.cn%2Fcommunity%2F01ee17559a29e832f87598b51ff597.jpg%401280w_1l_2o_100sh.png";
    var topContentHeader = Image.network(topCommentsHeader);
    var bottom = Container(
        padding: EdgeInsets.symmetric(horizontal: 5),
        margin: EdgeInsets.only(bottom: 10),
        child: Row(children: [
          Container(
              width: 48,
              margin: EdgeInsets.only(right: 10),
              child: Column(children: <Widget>[
                Container(
                  child: topContentHeader,
                ),
                Text(duanZiDetail.topCommentsName ?? "Nobody",
                    overflow: TextOverflow.ellipsis,
                    softWrap: false,
                    style: TextStyle(
                        fontSize: 12,
                        color: Colors.black87,
                        fontWeight: FontWeight.bold,
                        decoration: TextDecoration.none)),
              ])),
          Expanded(
            child: Text(duanZiDetail.topCommentsContent ?? "No Comment",
                style: TextStyle(
                    fontSize: 17,
                    color: Colors.black87,
                    fontWeight: FontWeight.bold,
                    decoration: TextDecoration.none)),
          ),
          Icon(Icons.thumb_up),
          Container(
            padding: EdgeInsets.only(right: 8),
            child: Text(" " + duanZiDetail.forward,
                style: TextStyle(
                    fontSize: 13,
                    color: Colors.black87,
                    fontWeight: FontWeight.bold,
                    decoration: TextDecoration.none)),
          ),
          Icon(Icons.thumb_down),
          Text(" " + duanZiDetail.down,
              style: TextStyle(
                  fontSize: 13,
                  color: Colors.black87,
                  fontWeight: FontWeight.bold,
                  decoration: TextDecoration.none))
        ]));

    if (duanZiDetail.type == "image") {
      return Column(
        children: <Widget>[
          title,
          Container(
              padding: EdgeInsets.all(5.0),
              child: Image.network(
                duanZiDetail.images,
                fit: BoxFit.fitWidth,
              )),
          bottom
        ],
      );
    } else if (duanZiDetail.type == "gif") {
      return Column(
        children: <Widget>[
          title,
          Container(
              padding: EdgeInsets.all(5.0),
              child: Image.network(
                duanZiDetail.images,
                fit: BoxFit.fitWidth,
              )),
          bottom
        ],
      );
    } else
      return Column(
        children: <Widget>[
          title,
          Container(
              padding: EdgeInsets.all(5.0),
              child: Image.network(
                duanZiDetail.thumbnail,
                fit: BoxFit.fitWidth,
              )),
          bottom
        ],
      );
  }
}
