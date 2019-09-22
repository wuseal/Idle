package wu.seal.app.idle.common.piclist.model

import io.ktor.client.HttpClient
import io.ktor.client.request.forms.submitForm
import io.ktor.client.request.url
import io.ktor.client.response.HttpResponse
import io.ktor.client.response.readText
import io.ktor.http.HttpStatusCode.Companion.OK
import kotlinx.serialization.UnstableDefault
import kotlinx.serialization.json.Json
import wu.seal.app.idle.common.base.ResponseData
import wu.seal.app.idle.common.base.error.HttpRequestError

internal class PicListRepositoryImp : PicListRepository {

    @UnstableDefault
    override suspend fun obtainFirstPageData(firstPageCount: Int): ResponseData<PicListResponse> {

        val response = HttpClient().submitForm<HttpResponse> {
            url("https://api.apiopen.top/getImages")
            url.parameters.apply {
                append("page", "1")
                append("count", firstPageCount.toString())
            }
        }
        return if (response.status == OK) {
            val picListResponse = Json.nonstrict.parse(PicListResponse.serializer(), response.readText())
            val newPics = picListResponse.pictures.map {
                if (it.img.startsWith("https").not()) {
                    val newImage = it.img.replace("http", "https")
                    it.copy(img = newImage)
                } else {
                    it
                }
            }
            ResponseData(picListResponse.copy(pictures = newPics))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }
    }

    @UnstableDefault
    override suspend fun obtainData(pageIndex: Int, pageCount: Int): ResponseData<PicListResponse> {
        val response = HttpClient().submitForm<HttpResponse> {
            url("https://api.apiopen.top/getImages")
            url.parameters.apply {
                append("page", pageIndex.toString())
                append("count", pageCount.toString())
            }
        }
        return if (response.status == OK) {
            val picListResponse = Json.nonstrict.parse(PicListResponse.serializer(), response.readText())
            val newPics = picListResponse.pictures.map {
                if (it.img.startsWith("https").not()) {
                    val newImage = it.img.replace("http", "https")
                    it.copy(img = newImage)
                } else {
                    it
                }
            }
            ResponseData(picListResponse.copy(pictures = newPics))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }
    }
}
