package wu.seal.mpp.idle.newslist

import android.app.Activity
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import kotlinx.android.synthetic.main.item_news.view.*
import wu.seal.app.idle.common.newslist.model.News
import wu.seal.mpp.idle.WebViewActivity
import wu.seal.mpp.idle.R


/**
 * Created by Seal.Wu on 2019-08-10
 * Description:
 */
class NewsListAdapter(newsList: List<News>) : RecyclerView.Adapter<NewsListAdapter.ViewHolder>() {
    private val mNewsList = mutableListOf<News>()

    init {
        mNewsList.addAll(newsList)
    }

    override fun onCreateViewHolder(p0: ViewGroup, p1: Int): NewsListAdapter.ViewHolder {
        val itemView = LayoutInflater.from(p0.context).inflate(R.layout.item_news, p0, false)
        val image = itemView.image_news
        val title = itemView.title_news
        val time = itemView.news_time
        return ViewHolder(itemView, image, title,time)
    }

    override fun getItemCount(): Int {
        return mNewsList.size
    }

    override fun onBindViewHolder(p0: NewsListAdapter.ViewHolder, p1: Int) {
        val news = mNewsList[p1]
        p0.title.text = news.title
        p0.time.text = news.passtime
        Glide.with(p0.image.context).load(news.image).into(p0.image)
        p0.itemView.setOnClickListener {
            WebViewActivity.launch(p0.itemView.context as Activity, news.path, news.title)
        }
    }

    fun appendItems(appendData: List<News>) {
        mNewsList.addAll(appendData)
    }

    class ViewHolder(
        itemView: View,
        val image: ImageView,
        val title: TextView,
        val time: TextView
    ) : RecyclerView.ViewHolder(itemView)
}