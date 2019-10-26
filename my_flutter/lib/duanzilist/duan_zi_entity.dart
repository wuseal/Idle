class DuanZiEntity {
	String thumbnail;
	String images;
	String topCommentsContent;
	String forward;
	String video;
	String type;
	String down;
	String sid;
	dynamic topCommentsUid;
	String uid;
	String passtime;
	dynamic topCommentsVoiceuri;
	String topCommentsName;
	String name;
	String header;
	String comment;
	String text;
	String up;
	String topCommentsHeader;

	DuanZiEntity({this.thumbnail, this.images, this.topCommentsContent, this.forward, this.video, this.type, this.down, this.sid, this.topCommentsUid, this.uid, this.passtime, this.topCommentsVoiceuri, this.topCommentsName, this.name, this.header, this.comment, this.text, this.up, this.topCommentsHeader});

	DuanZiEntity.fromJson(Map<String, dynamic> json) {
		thumbnail = json['thumbnail'];
		images = json['images'];
		topCommentsContent = json['topCommentsContent'];
		forward = json['forward'];
		video = json['video'];
		type = json['type'];
		down = json['down'];
		sid = json['sid'];
		topCommentsUid = json['topCommentsUid'];
		uid = json['uid'];
		passtime = json['passtime'];
		topCommentsVoiceuri = json['topCommentsVoiceuri'];
		topCommentsName = json['topCommentsName'];
		name = json['name'];
		header = json['header'];
		comment = json['comment'];
		text = json['text'];
		up = json['up'];
		topCommentsHeader = json['topCommentsHeader'];
	}

	Map<String, dynamic> toJson() {
		final Map<String, dynamic> data = new Map<String, dynamic>();
		data['thumbnail'] = this.thumbnail;
		data['images'] = this.images;
		data['topCommentsContent'] = this.topCommentsContent;
		data['forward'] = this.forward;
		data['video'] = this.video;
		data['type'] = this.type;
		data['down'] = this.down;
		data['sid'] = this.sid;
		data['topCommentsUid'] = this.topCommentsUid;
		data['uid'] = this.uid;
		data['passtime'] = this.passtime;
		data['topCommentsVoiceuri'] = this.topCommentsVoiceuri;
		data['topCommentsName'] = this.topCommentsName;
		data['name'] = this.name;
		data['header'] = this.header;
		data['comment'] = this.comment;
		data['text'] = this.text;
		data['up'] = this.up;
		data['topCommentsHeader'] = this.topCommentsHeader;
		return data;
	}
}
