package wu.seal.app.idle.common.duanzilist.model

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

class DuanZiListRepositoryImp :DuanZiListRepository{

    @UnstableDefault
    override suspend fun obtainData(pageIndex: Int, pageCount: Int): ResponseData<DuanZiListResponse> {
        val response = HttpClient().submitForm<HttpResponse> {
            url("https://api.apiopen.top/getJoke")
            url.parameters.apply {

                append("type","all")
                append("page", "$pageIndex")
                append("count", pageCount.toString())
            }
        }
        return if (response.status == OK) {
            val duanZiListResponse = Json.nonstrict.parse(DuanZiListResponse.serializer(), response.readText())
            val duanziList = duanZiListResponse.duanziList
            ResponseData(duanZiListResponse.copy(duanziList = duanziList))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }

    }

    @UnstableDefault
    override suspend fun obtainFirstPageData(firstPageSize: Int): ResponseData<DuanZiListResponse> {

        val response = HttpClient().submitForm<HttpResponse> {
            url("https://api.apiopen.top/getJoke")
            url.parameters.apply {

                append("type","all")
                append("page", "1")
                append("count", firstPageSize.toString())
            }
        }
        return if (response.status == OK) {
            val duanZiListResponse = Json.nonstrict.parse(DuanZiListResponse.serializer(), response.readText())
            val duanziList = duanZiListResponse.duanziList
            ResponseData(duanZiListResponse.copy(duanziList = duanziList))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }

    }

}
