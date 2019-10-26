package wu.seal.app.idle.common.duanzilist.view

import wu.seal.app.idle.common.base.BaseView
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.duanzilist.model.DuanZiListResponse

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
interface DuanZiListView : BaseView {
    fun initPage(duanziList: List<DuanZiListResponse.DuanZi>)
    fun showMoreData(duanziList: List<DuanZiListResponse.DuanZi>)
    fun showNoMoreDataTip()
    fun disableLoadMore()
}