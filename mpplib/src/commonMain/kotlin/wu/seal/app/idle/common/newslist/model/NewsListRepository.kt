package wu.seal.app.idle.common.newslist.model

import wu.seal.app.idle.common.base.ResponseData

interface NewsListRepository {

    val defaultPageCount:Int

    suspend fun loadData(): ResponseData<List<News>>

    suspend fun loadData(page: Int, count: Int = defaultPageCount): ResponseData<List<News>>
}
