package wu.seal.app.idle.common.newslist.model

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class News(
    @SerialName("image")
    val image: String = "",
    @SerialName("passtime")
    val passtime: String = "",
    @SerialName("path")
    val path: String = "",
    @SerialName("title")
    val title: String = ""
)