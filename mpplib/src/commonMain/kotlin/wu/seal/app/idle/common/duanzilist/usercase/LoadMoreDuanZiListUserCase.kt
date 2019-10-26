package wu.seal.app.idle.common.duanzilist.usercase

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.duanzilist.model.DuanZiListRepository
import wu.seal.app.idle.common.duanzilist.model.DuanZiListResponse
import wu.seal.app.idle.common.duanzilist.view.DuanZiListView

class LoadMoreDuanZiListUserCase(private val view: DuanZiListView, private val repository: DuanZiListRepository) :
    BaseUseCase {

    private var currentPage = 2 //load more initial page is 2, because the first page is 1
    private val pageCount = 10
    private val loadMoreEveryPageCount = pageCount //how many items every page will show

    override suspend fun execute() {

        val responseData = repository.obtainData(pageIndex = currentPage, pageCount = 10)
        if (responseData.responseData != null) {
            val duanziListResponse: DuanZiListResponse = responseData.responseData
            if (duanziListResponse.code == 200) {
                view.showMoreData(duanziListResponse.duanziList)
                if (duanziListResponse.duanziList.size < loadMoreEveryPageCount) {
                    view.showNoMoreDataTip()
                    view.disableLoadMore()
                } else {
                    currentPage++//page add 1, then next execute this user case will load next page data
                }
            } else {
                view.showError(HttpRequestError(duanziListResponse.message))
            }
        } else {
            view.showError(HttpRequestError(responseData.error.message ?: ""))
        }
    }


}
