package wu.seal.app.idle.common.duanzilist.model

import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.client.request.forms.*
import io.ktor.client.statement.*
import io.ktor.http.HttpStatusCode.Companion.OK
import kotlinx.serialization.json.Json
import wu.seal.app.idle.common.base.ResponseData
import wu.seal.app.idle.common.base.error.HttpRequestError

class DuanZiListRepositoryImp :DuanZiListRepository{

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
            val duanZiListResponse = Json.decodeFromString(DuanZiListResponse.serializer(), response.readText())
            val duanziList = duanZiListResponse.duanziList
            ResponseData(duanZiListResponse.copy(duanziList = duanziList))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }

    }

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
            val duanZiListResponse = Json.decodeFromString(DuanZiListResponse.serializer(), response.readText())
            val duanziList = duanZiListResponse.duanziList
            ResponseData(duanZiListResponse.copy(duanziList = duanziList))
        } else {
            ResponseData(null, HttpRequestError(response.readText()))
        }

    }

}
