package wu.seal.app.idle.common.utils

import android.util.Log

actual object LogUtil {

    actual fun i(tag: String, message: String) {
        Log.i(tag,message)
    }

    actual fun w(tag: String, message: String) {
        Log.w(tag,message)
    }

    actual fun e(tag: String, message: String) {
        Log.e(tag,message)
    }

    actual fun d(tag: String, message: String) {
        Log.d(tag, message)
    }

    actual fun w(tag: String, message: String, exception: Throwable) {
        Log.w(tag,message,exception)
    }

    actual fun e(tag: String, message: String, exception: Throwable) {
        Log.e(tag,message,exception)
    }
}