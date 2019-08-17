package wu.seal.app.idle.common.base

import wu.seal.app.idle.common.base.error.NoneError

/**
 * Created by Seal.Wu on 2019-08-10
 * Description: Responsed data from http request
 */
data class ResponseData<T>(val responseData: T?, val error: Throwable = NoneError("Data Obtain Successfully!"))