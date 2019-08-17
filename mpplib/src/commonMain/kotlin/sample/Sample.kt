package sample

import wu.seal.app.idle.common.newslist.model.News

expect class Sample() {
    fun checkMe(): Int
}

expect object Platform {
    val name: String
}

fun hello(): String = "Hello from ${Platform.name}"

fun getNews() = News()
class Proxy {
    fun proxyHello() = hello()
}

fun main() {
    println(hello())
}