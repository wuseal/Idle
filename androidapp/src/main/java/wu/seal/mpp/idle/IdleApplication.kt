package wu.seal.mpp.idle

import android.app.Application
import io.flutter.facade.Flutter
import wu.seal.app.idle.common.MPPLibModule


/**
 * Created by Seal.Wu on 2019-08-10
 * Description: The Application of Idle app
 */
class IdleApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        MPPLibModule.initModule()
        Flutter.startInitialization(this)
    }
}