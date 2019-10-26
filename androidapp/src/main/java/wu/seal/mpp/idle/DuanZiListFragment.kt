package wu.seal.mpp.idle

import android.os.Bundle
import android.view.View
import com.google.gson.Gson
import io.flutter.plugin.common.MethodChannel
import io.flutter.view.FlutterView
import kotlinx.coroutines.Dispatchers
import luyao.util.ktx.ext.toast
import wu.seal.app.idle.common.duanzilist.DuanZiPresenter
import wu.seal.app.idle.common.duanzilist.model.DuanZiListResponse
import wu.seal.app.idle.common.duanzilist.view.DuanZiListView
import wu.seal.app.idle.common.utils.LogUtil
import kotlin.properties.Delegates

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
class DuanZiListFragment : BaseFlutterFragment(), DuanZiListView {
    companion object {
        fun create() = DuanZiListFragment().apply {
            arguments = Bundle().also { it.putString(ARG_ROUTE, "duanzi_entry") }
        }
    }

    private val TAG: String = "DuanZiListFragment"
    private val channel = "wu.sea.flutter/duanziList"
    private var methodChannel: MethodChannel by Delegates.notNull()

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        val duanZiPresenter = DuanZiPresenter(Dispatchers.Main, this)
        methodChannel = MethodChannel(getView() as FlutterView, channel)
        methodChannel.setMethodCallHandler { methodCall, result ->
            if (methodCall.method == "loadMore") {
                duanZiPresenter.loadMore()
            }
        }
        duanZiPresenter.initFirstPage()
    }

    override fun initPage(duanziList: List<DuanZiListResponse.DuanZi>) {

        val toJson = Gson().toJson(duanziList)
        LogUtil.i(TAG, "to be transport duanzi list : $duanziList")
        methodChannel.invokeMethod("initPage", toJson)

    }

    override fun showMoreData(duanziList: List<DuanZiListResponse.DuanZi>) {
        methodChannel.invokeMethod("showMoreData", Gson().toJson(duanziList))
    }

    override fun showNoMoreDataTip() {
        activity?.toast("没有更多内容了")
    }

    override fun disableLoadMore() {
        methodChannel.invokeMethod("disableLoadMore", null)
    }

}