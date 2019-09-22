package wu.seal.mpp.idle

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import kotlinx.android.synthetic.main.fragment_pic_list.*
import kotlinx.coroutines.Dispatchers
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.piclist.PicListPresenter
import wu.seal.app.idle.common.piclist.model.PicListResponse
import wu.seal.app.idle.common.piclist.view.PicListView
import wu.seal.app.idle.common.utils.LogUtil
import wu.seal.mpp.idle.piclist.PicListAdapter

/**
 * A Picture List [Fragment] subclass.
 * Use the [PicListFragment.newInstance] factory method to
 * create an instance of this fragment.
 *
 */
class PicListFragment : BaseFragment(), PicListView {

    private val TAG = "PicListFragment"

    private val presenter = PicListPresenter(Dispatchers.Main, this)

    private val adapter: PicListAdapter by lazy { PicListAdapter() }

    private var couldLoadMore = true

    override fun initPage(pictures: List<PicListResponse.Picture>) {
        LogUtil.i(TAG, "load first page data : $pictures")
        adapter.init(pictures)
        pic_list_view.adapter = adapter
    }

    override fun showMoreData(pictures: List<PicListResponse.Picture>) {
        LogUtil.i(TAG,"load more data : $pictures")
        adapter.addMoreData(pictures)
    }

    override fun showNoMoreDataTip() {
        activity?.toast("没有更多的图片了...")
    }

    override fun disableLoadMore() {
        couldLoadMore = false
    }

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment
        return inflater.inflate(R.layout.fragment_pic_list, container, false)
    }


    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {

        pic_list_view.addOnScrollListener(object : RecyclerView.OnScrollListener() {
            override fun onScrolled(recyclerView: RecyclerView, dx: Int, dy: Int) {
                if (isSlideToBottom(recyclerView) && couldLoadMore) {
                    presenter.loadMorePage()
                }
            }
        })
        pic_list_view.layoutManager = LinearLayoutManager(activity)

        presenter.initFirstPage()
    }

    private fun isSlideToBottom(recyclerView: RecyclerView?): Boolean {
        if (recyclerView == null) return false
        return recyclerView.computeVerticalScrollExtent() + recyclerView.computeVerticalScrollOffset() >= recyclerView.computeVerticalScrollRange()
    }

    companion object {
        /**
         * Use this factory method to create a new instance of
         * this fragment using the provided parameters.
         * @return A new instance of fragment PicListFragment.
         */
        @JvmStatic
        fun newInstance() = PicListFragment()
    }
}
