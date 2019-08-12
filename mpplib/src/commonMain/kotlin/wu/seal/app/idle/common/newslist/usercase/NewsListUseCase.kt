package wu.seal.app.idle.common.newslist.usercase

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.NoneError
import wu.seal.app.idle.common.newslist.model.News
import wu.seal.app.idle.common.newslist.model.NewsListRepository
import wu.seal.app.idle.common.newslist.view.NewsListView

/**
 * Created by Seal.Wu on 2019-08-10
 * Description: the use case of newsList view
 */
class NewsListUseCase(private val repository: NewsListRepository, private val view: NewsListView) :BaseUseCase{

    override suspend fun execute() {
        val loadData = repository.loadData()
        if (loadData.error !is NoneError) {
            val newsList: List<News> = loadData.responseData ?: listOf()
            view.initWithData(newsList)
        } else {
            view.showError(loadData.error)
        }
    }

}