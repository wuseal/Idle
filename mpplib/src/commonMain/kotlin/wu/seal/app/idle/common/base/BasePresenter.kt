package wu.seal.app.idle.common.base

import kotlinx.coroutines.CoroutineExceptionHandler
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import wu.seal.app.idle.common.utils.LogUtil
import kotlin.coroutines.CoroutineContext

open class BasePresenter(private val uiContext: CoroutineContext,private val baseView:BaseView) : CoroutineScope {

    private val job = Job()
    private val exceptionHandler = CoroutineExceptionHandler { _, throwable ->
        baseView.showError(throwable)
        LogUtil.e(tag = "CoroutineExceptionHandler", message = throwable.message.toString(),exception = throwable)
    }

    override val coroutineContext: CoroutineContext
        get() = uiContext + job + exceptionHandler

    open fun onDestroy() {
        job.cancel()
    }
}
