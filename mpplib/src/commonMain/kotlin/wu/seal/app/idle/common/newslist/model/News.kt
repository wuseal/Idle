package wu.seal.app.idle.common.newslist.model

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.Optional

@Serializable
data class News(
    @Optional
    @SerialName("image")
    val image: String = "",
    @Optional
    @SerialName("passtime")
    val passtime: String = "",
    @Optional
    @SerialName("path")
    val path: String = "",
    @Optional
    @SerialName("title")
    val title: String = ""
)