package wu.seal.app.idle.common.duanzilist.model


import kotlinx.serialization.Contextual
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class DuanZiListResponse(
    
    @SerialName("code")
    val code: Int = 0,
    
    @SerialName("message")
    val message: String = "",
    
    @SerialName("result")
    val duanziList: List<DuanZi> = listOf()
) {
    @Serializable
    data class DuanZi(
        
        @SerialName("comment")
        val comment: String = "",
        
        @SerialName("down")
        val down: String = "",
        
        @SerialName("forward")
        val forward: String = "",
        
        @SerialName("header")
        val header: String? = "",
        
        @SerialName("images")
        @Contextual
        val images: String? = "",
        
        @SerialName("name")
        val name: String = "",
        
        @SerialName("passtime")
        val passtime: String = "",
        
        @SerialName("sid")
        val sid: String = "",
        
        @SerialName("text")
        val text: String? = "",
        
        @SerialName("thumbnail")
        val thumbnail: String? = "",
        
        @SerialName("top_comments_content")
        val topCommentsContent: String? = "",
        
        @SerialName("top_comments_header")
        val topCommentsHeader: String? = "",
        
        @SerialName("top_comments_name")
        val topCommentsName: String? = "",
        
        @SerialName("top_comments_uid")
        val topCommentsUid: String? = "",
        
        @SerialName("top_comments_voiceuri")
        val topCommentsVoiceuri: String? = "",
        
        @SerialName("type")
        val type: String = "",
        
        @SerialName("uid")
        val uid: String? = "",
        
        @SerialName("up")
        val up: String? = "",
        
        @SerialName("video")
        val video: String? = ""
    )
}