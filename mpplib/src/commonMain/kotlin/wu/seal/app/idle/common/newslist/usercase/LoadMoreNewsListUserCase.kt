package wu.seal.app.idle.common.newslist.usercase

import co.touchlab.stately.ensureNeverFrozen
import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.NoneError
import wu.seal.app.idle.common.newslist.model.NewsListRepository
import wu.seal.app.idle.common.newslist.view.NewsListView
import wu.seal.app.idle.common.utils.AtomicInt
import wu.seal.app.idle.common.utils.LogUtil

/**
 * Created by Seal.Wu on 2019-08-10
 * Description:
 */
class LoadMoreNewsListUserCase(
    private val repository: NewsListRepository,
    private val view: NewsListView
) : BaseUseCase {

    init {
        ensureNeverFrozen()
    }

    private val tag: String = "LoadMoreNewsListUserCase"

    private var currentPageNum = 1

    private val pageCount = repository.defaultPageCount

    override suspend fun execute() {
        val loadData = repository.loadData(currentPageNum, pageCount)
        LogUtil.i(tag, "loaded data : $loadData")
        if (loadData.error !is NoneError) {
            view.showError(loadData.error)
            loadData.error.printStackTrace()
        } else {
            val responseData = loadData.responseData

            val dataSize = responseData?.size ?: 0
            if (dataSize < pageCount) {
                view.showNoAnyMore()
                if (dataSize != 0) {
                    requireNotNull(responseData)
                    if (currentPageNum == 1) {
                        LogUtil.i(tag, "star init view with data : $responseData")
                        view.initWithData(responseData)
                    } else {
                        LogUtil.i(tag, "star update view with data : $responseData")
                        view.appendItems(responseData)
                    }
                }
                view.disableLoadMore()
            } else {
                requireNotNull(responseData)
                if (currentPageNum == 1) {
                    LogUtil.i(tag, "star init view with data : $responseData")
                    view.initWithData(responseData)
                } else {
                    LogUtil.i(tag, "star update view with data : $responseData")
                    view.appendItems(responseData)
                }
                currentPageNum++
            }
        }
    }

}