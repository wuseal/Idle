import 'package:flutter/material.dart';
import 'package:video_player/video_player.dart';

class VideoApp extends StatefulWidget {
  String mUrl ;

  VideoApp({String url='http://uvideo.spriteapp.cn/video/2019/1024/5db18558adb3c_wpd.mp4'}) : mUrl = url;

  @override
  _VideoAppState createState() => _VideoAppState(mUrl);
}

class _VideoAppState extends State<VideoApp> {
  String mUrl;
  VideoPlayerController _controller;

  _VideoAppState(String url) : mUrl = url;

  @override
  void initState() {
    super.initState();
    _controller = VideoPlayerController.network(this.mUrl)
      ..initialize().then((_) {
        // Ensure the first frame is shown after the video is initialized, even before the play button has been pressed.
        setState(() {
          _controller.setLooping(true);
        });
      });
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Video Demo',
      home: Scaffold(
        body: Center(
          child: _controller.value.initialized
              ? AspectRatio(
                  aspectRatio: _controller.value.aspectRatio,
                  child: VideoPlayer(_controller),
                )
              : Container(),
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: () {
            setState(() {
              _controller.value.isPlaying
                  ? _controller.pause()
                  : _controller.play();
            });
          },
          child: Icon(
            _controller.value.isPlaying ? Icons.pause : Icons.play_arrow,
          ),
        ),
      ),
    );
  }

  @override
  void dispose() {
    super.dispose();
    _controller.dispose();
  }
}
