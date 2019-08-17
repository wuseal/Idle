package wu.seal.app.idle.common

import wu.seal.app.idle.common.utils.LogUtil

actual object MPPLibModule {
    private val tag = "MPPLibModule"
    actual fun initModule() {
        LogUtil.i(tag,"init ios mpp implement")
    }
}