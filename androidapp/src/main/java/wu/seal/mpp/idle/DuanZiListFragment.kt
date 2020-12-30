package wu.seal.mpp.idle

import android.os.Bundle
import android.view.View
import com.google.gson.Gson
import kotlinx.coroutines.Dispatchers
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.duanzilist.DuanZiPresenter
import wu.seal.app.idle.common.duanzilist.model.DuanZiListResponse
import wu.seal.app.idle.common.duanzilist.view.DuanZiListView
import wu.seal.app.idle.common.utils.LogUtil

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
class DuanZiListFragment : BaseFragment() , DuanZiListView {
    companion object {
        fun create() = DuanZiListFragment().apply {
        }
    }

    private val TAG: String = "DuanZiListFragment"

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val duanZiPresenter = DuanZiPresenter(Dispatchers.Main, this)

        duanZiPresenter.initFirstPage()
    }

    override fun initPage(duanziList: List<DuanZiListResponse.DuanZi>) {

        val toJson = Gson().toJson(duanziList)
        LogUtil.i(TAG, "to be transport duanzi list : $duanziList")

    }

    override fun showMoreData(duanziList: List<DuanZiListResponse.DuanZi>) {
    }

    override fun showNoMoreDataTip() {
        activity?.toast("没有更多内容了")
    }

    override fun disableLoadMore() {
    }

}