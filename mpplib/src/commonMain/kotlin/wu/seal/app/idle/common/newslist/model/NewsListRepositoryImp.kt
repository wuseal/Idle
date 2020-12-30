package wu.seal.app.idle.common.newslist.model

import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.client.request.forms.*
import io.ktor.client.statement.*
import io.ktor.http.*
import io.ktor.http.HttpStatusCode.Companion.OK
import kotlinx.serialization.builtins.ListSerializer
import kotlinx.serialization.json.Json
import wu.seal.app.idle.common.base.OpenApiReturnData
import wu.seal.app.idle.common.base.ResponseData
import wu.seal.app.idle.common.base.error.HttpRequestError

class NewsListRepositoryImp : NewsListRepository {

    override val defaultPageCount = 10

    override suspend fun loadData(): ResponseData<List<News>> = loadData(1, defaultPageCount)

    override suspend fun loadData(page: Int, count: Int): ResponseData<List<News>> {

        val response = HttpClient().submitForm<HttpResponse>(
            url = "https://api.apiopen.top/getWangYiNews",
            formParameters = Parameters.build {
                append("page", page.toString())
                append("count", count.toString())
            },
            encodeInQuery = true
        )
        return if (response.status == OK) {
            val returnDataSerializer = OpenApiReturnData.serializer(ListSerializer(News.serializer()))
            val newsList = Json.decodeFromString(returnDataSerializer, response.readText()).result?.map {
                val originImagePath = it.image
                val httpsImage = originImagePath.replace("http", "https")
                it.copy(image = httpsImage)
            }
            ResponseData(newsList)
        } else {
            val error = response.readText()
            ResponseData(null, HttpRequestError(error))
        }
    }

}