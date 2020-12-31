package wu.seal.mpp.idle

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.fragment_news_list.*
import kotlinx.coroutines.Dispatchers
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.newslist.NewsListPresenter
import wu.seal.app.idle.common.newslist.model.News
import wu.seal.app.idle.common.newslist.view.NewsListView
import wu.seal.mpp.idle.newslist.NewsListAdapter

/**
 * Pic List Fragment
 *
 */
class NewsListFragment : BaseFragment(), NewsListView {

    private val presenter = NewsListPresenter(this)

    private lateinit var adapter: NewsListAdapter
    private var couldLoadMore = true

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_news_list, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        news_list_view.addOnScrollListener(object : RecyclerView.OnScrollListener() {
            override fun onScrolled(recyclerView: RecyclerView, dx: Int, dy: Int) {
                if (isSlideToBottom(recyclerView) && couldLoadMore) {
                    presenter.executeLoadMoreNewsListUserCase()
                }
            }
        })
        news_list_view.layoutManager = LinearLayoutManager(activity)

        presenter.executeLoadMoreNewsListUserCase()
    }

    override fun initWithData(newsList: List<News>) {
        adapter = NewsListAdapter(newsList)
        news_list_view.adapter = adapter
    }

    override fun showNoAnyMore() {
        activity?.toast("没有更多内容了")
    }

    override fun appendItems(appendData: List<News>) {
        adapter.appendItems(appendData)
        adapter.notifyDataSetChanged()
    }

    override fun disableLoadMore() {
        couldLoadMore = false
    }

    private fun isSlideToBottom(recyclerView: RecyclerView?): Boolean {
        if (recyclerView == null) return false
        return recyclerView.computeVerticalScrollExtent() + recyclerView.computeVerticalScrollOffset() >= recyclerView.computeVerticalScrollRange()
    }
}
