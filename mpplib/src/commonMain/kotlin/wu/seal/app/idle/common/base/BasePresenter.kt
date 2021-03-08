package wu.seal.app.idle.common.base

import co.touchlab.stately.ensureNeverFrozen
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.SupervisorJob
import kotlin.coroutines.CoroutineContext

open class BasePresenter(private val baseView:BaseView) : CoroutineScope {

    init {
        this.ensureNeverFrozen()
    }
    private val job = SupervisorJob()


    override val coroutineContext: CoroutineContext
        get() = Dispatchers.Main + job

    open fun onDestroy() {
        job.cancel()
    }
}
