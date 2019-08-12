package wu.seal.app.idle.common.newslist.view

import wu.seal.app.idle.common.base.BaseView
import wu.seal.app.idle.common.newslist.model.News

interface NewsListView :BaseView{
    fun initWithData(newsList: List<News>)
    fun showNoAnyMore()
    fun appendItems(appendData: List<News>)
    fun disableLoadMore()

}
