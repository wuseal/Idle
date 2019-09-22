package wu.seal.mpp.idle

import androidx.fragment.app.Fragment
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.base.BaseView

/**
 * Created by Seal.Wu on 2019/9/22
 * Description:
 */

open class BaseFragment : Fragment(),BaseView {
    override fun showError(throwable: Throwable) {
        activity?.toast(throwable.localizedMessage)
    }

}