package wu.seal.app.idle.common.utils

import java.util.concurrent.atomic.AtomicInteger

actual class AtomicInt actual constructor(value: Int) {
    private val atomicInt= AtomicInteger(value)
    actual fun increment() {
        atomicInt.addAndGet(1)
    }

    actual val value: Int
        get() = atomicInt.get()
}