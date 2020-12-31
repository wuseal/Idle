package wu.seal.app.idle.common.utils

expect class AtomicInt(value: Int) {
    fun increment()
    val value: Int
}
