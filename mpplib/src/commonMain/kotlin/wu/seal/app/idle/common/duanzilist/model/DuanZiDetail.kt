package wu.seal.app.idle.common.duanzilist.model


import kotlinx.serialization.ContextualSerialization
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.Optional

@Serializable
data class DuanZiDetail(
    @Optional
    @SerialName("comment")
    val comment: String = "",
    @Optional
    @SerialName("down")
    val down: String = "",
    @Optional
    @SerialName("forward")
    val forward: String = "",
    @Optional
    @SerialName("header")
    val header: String = "",
    @Optional
    @SerialName("images")
    @ContextualSerialization
    val images: Any? = Any(),
    @Optional
    @SerialName("name")
    val name: String = "",
    @Optional
    @SerialName("passtime")
    val passtime: String = "",
    @Optional
    @SerialName("sid")
    val sid: String = "",
    @Optional
    @SerialName("text")
    val text: String = "",
    @Optional
    @SerialName("thumbnail")
    val thumbnail: String = "",
    @Optional
    @SerialName("top_comments_content")
    val topCommentsContent: String? = "",
    @Optional
    @SerialName("top_comments_header")
    val topCommentsHeader: String? = "",
    @Optional
    @SerialName("top_comments_name")
    val topCommentsName: String? = "",
    @Optional
    @SerialName("top_comments_uid")
    val topCommentsUid: String? = "",
    @Optional
    @SerialName("top_comments_voiceuri")
    val topCommentsVoiceuri: String? = "",
    @Optional
    @SerialName("type")
    val type: String = "",
    @Optional
    @SerialName("uid")
    val uid: String = "",
    @Optional
    @SerialName("up")
    val up: String = "",
    @Optional
    @SerialName("video")
    val video: String = ""
)