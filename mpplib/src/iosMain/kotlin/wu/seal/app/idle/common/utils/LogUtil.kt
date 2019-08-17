package wu.seal.app.idle.common.utils

actual object LogUtil {
    actual fun i(tag: String, message: String) {
        println("$tag\t$message")
    }
    actual fun w(tag: String, message: String) {
        println("$tag\t$message")

    }
    actual fun w(tag: String, message: String, exception: Throwable) {
        println("$tag\t$message")

    }
    actual fun e(tag: String, message: String) {
        println("$tag\t$message")
    }
    actual fun e(tag: String, message: String, exception: Throwable) {
        println("$tag\t$message")

    }
    actual fun d(tag: String, message: String) {
        println("$tag\t$message")
    }
}