package wu.seal.app.idle.common.newslist

import kotlinx.coroutines.launch
import wu.seal.app.idle.common.base.BasePresenter
import wu.seal.app.idle.common.newslist.model.NewsListRepository
import wu.seal.app.idle.common.newslist.model.NewsListRepositoryImp
import wu.seal.app.idle.common.newslist.usercase.LoadMoreNewsListUserCase
import wu.seal.app.idle.common.newslist.usercase.NewsListUseCase
import wu.seal.app.idle.common.newslist.view.NewsListView
import wu.seal.app.idle.common.utils.AtomicInt
import wu.seal.app.idle.common.utils.LogUtil
import kotlin.coroutines.CoroutineContext

/**
 * Created by Seal.Wu on 2019-08-10
 * Description: Presenter logic for news list view page
 */
class NewsListPresenter(private val newsListView: NewsListView) :
    BasePresenter(newsListView) {

    private val tag: String = "NewsListPresenter"
    private val newsListRepository: NewsListRepository = NewsListRepositoryImp()
    private val loadMoreNewsListUserCase: LoadMoreNewsListUserCase by lazy {
        LoadMoreNewsListUserCase(
            repository = newsListRepository,
            view = newsListView
        )
    }

    /**
     * perform news list user case
     */
    fun executeNewsListUseCase() {
        launch {
            NewsListUseCase(newsListRepository, newsListView).execute()
        }
    }

    fun executeLoadMoreNewsListUserCase() {
        launch {
            LogUtil.i(tag, "start execute executeLoadMoreNewsListUserCase")
            loadMoreNewsListUserCase.execute()
        }
    }

    fun executeRefreshNewsListUserCase() {
        executeNewsListUseCase()
    }

}