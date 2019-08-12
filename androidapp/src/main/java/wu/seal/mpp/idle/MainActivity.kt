package wu.seal.mpp.idle

import android.Manifest
import android.os.Bundle
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.coroutines.Dispatchers
import luyao.util.ktx.ext.permission.request
import luyao.util.ktx.ext.toast
import sample.Sample
import wu.seal.app.idle.common.newslist.NewsListPresenter
import wu.seal.app.idle.common.newslist.model.News
import wu.seal.app.idle.common.newslist.view.NewsListView
import wu.seal.mpp.idle.newslist.NewsListAdapter


class MainActivity : BaseActivity(), NewsListView {

    private val presenter = NewsListPresenter(Dispatchers.Main, this)
    private lateinit var adapter: NewsListAdapter
    private var couldLoadMore = true

    override fun initWithData(newsList: List<News>) {
        adapter = NewsListAdapter(newsList)
        news_list_view.adapter = adapter
    }

    override fun showNoAnyMore() {
        toast("没有更多内容了")
    }

    override fun appendItems(appendData: List<News>) {
        adapter.appendItems(appendData)
        adapter.notifyDataSetChanged()
    }

    override fun disableLoadMore() {
        couldLoadMore = false
    }


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Sample().checkMe()
        setContentView(R.layout.activity_main)
        request(Manifest.permission.WRITE_EXTERNAL_STORAGE, Manifest.permission.READ_EXTERNAL_STORAGE) {
            news_list_view.addOnScrollListener(object : RecyclerView.OnScrollListener() {
                override fun onScrolled(recyclerView: RecyclerView, dx: Int, dy: Int) {
                    if (isSlideToBottom(recyclerView) && couldLoadMore) {
                        presenter.executeLoadMoreNewsListUserCase()
                    }
                }
            })
            news_list_view.layoutManager = LinearLayoutManager(this@MainActivity)

            presenter.executeLoadMoreNewsListUserCase()
        }

    }

    private fun isSlideToBottom(recyclerView: RecyclerView?): Boolean {
        if (recyclerView == null) return false
        return recyclerView.computeVerticalScrollExtent() + recyclerView.computeVerticalScrollOffset() >= recyclerView.computeVerticalScrollRange()
    }
}