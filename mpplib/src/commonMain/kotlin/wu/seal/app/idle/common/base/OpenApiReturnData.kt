package wu.seal.app.idle.common.base

/**
 * Created by Seal.Wu on 2019-08-10
 * Base return data template for all http request for openApi : www.apiopen.top
 */
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.Optional

@Serializable
data class OpenApiReturnData<T>(
    @Optional
    @SerialName("code")
    val code: Int = 0,
    @Optional
    @SerialName("message")
    val message: String = "",
    @Optional
    @SerialName("result")
    val result: T? = null
)