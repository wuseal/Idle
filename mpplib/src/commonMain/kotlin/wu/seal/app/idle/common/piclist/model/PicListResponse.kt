package wu.seal.app.idle.common.piclist.model


import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.Optional

@Serializable
data class PicListResponse(
    @Optional
    @SerialName("code")
    val code: Int = 0,
    @Optional
    @SerialName("message")
    val message: String = "",
    @Optional
    @SerialName("result")
    val pictures: List<Picture> = listOf()
) {
    @Serializable
    data class Picture(
        @Optional
        @SerialName("id")
        val id: Int = 0,
        @Optional
        @SerialName("img")
        val img: String = "",
        @Optional
        @SerialName("time")
        val time: String = ""
    )
}