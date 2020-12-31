package wu.seal.app.idle.common.utils

import kotlin.native.concurrent.AtomicInt

actual class AtomicInt actual constructor(value: Int){
    private val atomicInt= AtomicInt(value)
    actual fun increment() {
        atomicInt.increment()
    }

    actual val value: Int
        get() = atomicInt.value
}
