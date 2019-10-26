package wu.seal.mpp.idle

import io.flutter.facade.FlutterFragment
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.base.BaseView

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
open class BaseFlutterFragment : FlutterFragment(), BaseView {
    override fun showError(throwable: Throwable) {
        activity?.toast(throwable.localizedMessage)
    }
}