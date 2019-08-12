package wu.seal.app.idle.common.base

//import com.github.aakira.napier.Napier
import kotlinx.coroutines.CoroutineExceptionHandler
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlin.coroutines.CoroutineContext

open class BasePresenter(private val uiContext: CoroutineContext,private val baseView:BaseView) : CoroutineScope {

    private val job = Job()
    private val exceptionHandler = CoroutineExceptionHandler { _, throwable ->
        baseView.showError(throwable)
//        Napier.e(throwable.message.toString(),throwable)
    }

    override val coroutineContext: CoroutineContext
        get() = uiContext + job + exceptionHandler

    open fun onDestroy() {
        job.cancel()
    }
}
