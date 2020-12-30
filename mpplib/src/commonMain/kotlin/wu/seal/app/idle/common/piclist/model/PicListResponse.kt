package wu.seal.app.idle.common.piclist.model


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class PicListResponse(
    @SerialName("code")
    val code: Int = 0,
    @SerialName("message")
    val message: String = "",
    @SerialName("result")
    val pictures: List<Picture> = listOf()
) {
    @Serializable
    data class Picture(
        @SerialName("id")
        val id: Int = 0,
        @SerialName("img")
        val img: String = "",
        @SerialName("time")
        val time: String = ""
    )
}