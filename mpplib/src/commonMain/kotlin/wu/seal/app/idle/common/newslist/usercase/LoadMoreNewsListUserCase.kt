package wu.seal.app.idle.common.newslist.usercase

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.NoneError
import wu.seal.app.idle.common.newslist.model.NewsListRepository
import wu.seal.app.idle.common.newslist.view.NewsListView

/**
 * Created by Seal.Wu on 2019-08-10
 * Description:
 */
class LoadMoreNewsListUserCase(private val repository: NewsListRepository, private val view: NewsListView) :
    BaseUseCase {

    private var currentPageNum = 1

    private val pageCount = repository.defaultPageCount

    override suspend fun execute() {
        val loadData = repository.loadData(currentPageNum, pageCount)
        if (loadData.error !is NoneError) {
            view.showError(loadData.error)
        } else {
            val responseData = loadData.responseData

            val dataSize = responseData?.size ?: 0
            if (dataSize < pageCount) {
                view.showNoAnyMore()
                if (dataSize != 0) {
                    requireNotNull(responseData)
                    if (currentPageNum == 1) {
                        view.initWithData(responseData)
                    } else {
                        view.appendItems(responseData)
                    }
                }
                view.disableLoadMore()
            } else {
                requireNotNull(responseData)
                if (currentPageNum == 1) {
                    view.initWithData(responseData)
                } else {
                    view.appendItems(responseData)
                }
                currentPageNum++
            }
        }
    }

}