package wu.seal.app.idle.ios
/**
 * Created by Seal.Wu on 2019-08-17
 * Description:
 */
import kotlinx.coroutines.*
import platform.darwin.*
import kotlin.coroutines.*

class UIDispatcher : CoroutineDispatcher() {
    override fun dispatch(context: CoroutineContext, block: Runnable) {
        val queue = dispatch_get_main_queue()
        dispatch_async(queue) {
            block.run()
        }
    }
}