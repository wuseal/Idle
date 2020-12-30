package wu.seal.app.idle.common.base

/**
 * Created by Seal.Wu on 2019-08-10
 * Base return data template for all http request for openApi : www.apiopen.top
 */
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class OpenApiReturnData<T>(
    @SerialName("code")
    val code: Int = 0,
    @SerialName("message")
    val message: String = "",
    @SerialName("result")
    val result: T? = null
)