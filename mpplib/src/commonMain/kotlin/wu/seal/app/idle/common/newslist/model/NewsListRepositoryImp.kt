package wu.seal.app.idle.common.newslist.model

import io.ktor.client.HttpClient
import io.ktor.client.request.post
import io.ktor.client.response.HttpResponse
import io.ktor.client.response.readText
import io.ktor.http.HttpStatusCode.Companion.OK
import io.ktor.http.Url
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.internal.ArrayListSerializer
import kotlinx.serialization.json.Json
import wu.seal.app.idle.common.base.OpenApiReturnData
import wu.seal.app.idle.common.base.ResponseData
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.utils.toPostRequestFormBody

class NewsListRepositoryImp : NewsListRepository {

    override val defaultPageCount = 10

    @UnstableDefault
    override suspend fun loadData(): ResponseData<List<News>> = loadData(1, defaultPageCount)


    @UnstableDefault
    override suspend fun loadData(page: Int, count: Int): ResponseData<List<News>> {

        val response = HttpClient().post<HttpResponse>(url = Url("https://api.apiopen.top/getWangYiNews")) {

            body = mapOf("page" to page, "count" to count).toPostRequestFormBody()
        }

        return if (response.status == OK) {
            val returnDataSerializer = OpenApiReturnData.serializer(ArrayListSerializer(News.serializer()))
            val newsList = Json.nonstrict.parse(returnDataSerializer, response.readText()).result?.map {
                val originImagePath = it.image
                val httpsImage = originImagePath.replace("http","https")
                it.copy(image = httpsImage)
            }
            ResponseData(newsList)
        } else {
            val error = response.readText()
            ResponseData(null, HttpRequestError(error))
        }
    }

}