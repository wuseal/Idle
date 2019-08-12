package wu.seal.app.idle.common.utils

/**
 * Created by Seal.Wu on 2019-08-10
 * Description: Extension for Http Request to Simply the Http code
 */

fun <K, V> Map<K, V>.toPostRequestFormBody() = map { "${it.key.toString()}=${it.value.toString()}" }.joinToString("&")