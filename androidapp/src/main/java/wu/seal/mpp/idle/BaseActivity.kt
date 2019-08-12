package wu.seal.mpp.idle

import android.annotation.SuppressLint
import androidx.appcompat.app.AppCompatActivity
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.base.BaseView

/**
 * Created by Seal.Wu on 2019-08-10
 * Description:
 */
@SuppressLint("Registered")
open class BaseActivity: AppCompatActivity(),BaseView {


    override fun showError(throwable: Throwable) {
        this.toast(throwable.message.toString())
    }

}