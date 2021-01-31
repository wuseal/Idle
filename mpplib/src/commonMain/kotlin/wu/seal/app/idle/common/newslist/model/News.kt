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
) {
    fun getStringTwo(): String {
        val a = image + ": " + passtime
        val b = path + ": " + title
        return a + "\n" + b
    }
}