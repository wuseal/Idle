package wu.seal.app.idle.common.utils

expect object LogUtil {
    fun i(tag: String, message: String)
    fun w(tag: String, message: String)
    fun w(tag: String, message: String, exception: Throwable)
    fun e(tag: String, message: String)
    fun e(tag: String, message: String, exception: Throwable)
    fun d(tag: String, message: String)
}