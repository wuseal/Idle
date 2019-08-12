package wu.seal.app.idle.common.base.error
/**
 *  Created by Seal.Wu on 2019-08-10
 * Indicate the server return data is Not OK with some error info
 */
class HttpRequestError(error: String) : Throwable("HttpRequest Error: $error")
