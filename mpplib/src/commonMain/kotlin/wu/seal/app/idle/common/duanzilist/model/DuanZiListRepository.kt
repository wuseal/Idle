package wu.seal.app.idle.common.duanzilist.model

import wu.seal.app.idle.common.base.ResponseData

interface DuanZiListRepository {
    suspend fun obtainFirstPageData(firstPageSize: Int): ResponseData<DuanZiListResponse>
    suspend fun obtainData(pageIndex: Int, pageCount: Int): ResponseData<DuanZiListResponse>

}
