package wu.seal.app.idle.common.piclist.model

import wu.seal.app.idle.common.base.ResponseData

internal interface PicListRepository {
    suspend fun obtainFirstPageData(firstPageCount: Int): ResponseData<PicListResponse>
    suspend fun obtainData(pageIndex: Int, pageCount: Int): ResponseData<PicListResponse>

}
