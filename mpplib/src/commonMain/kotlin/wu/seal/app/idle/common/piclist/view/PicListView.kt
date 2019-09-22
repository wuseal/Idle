package wu.seal.app.idle.common.piclist.view

import wu.seal.app.idle.common.base.BaseView
import wu.seal.app.idle.common.piclist.model.PicListResponse

interface PicListView :BaseView{
    fun initPage(pictures: List<PicListResponse.Picture>)
    fun showMoreData(pictures: List<PicListResponse.Picture>)
    fun showNoMoreDataTip()
    fun disableLoadMore()

}
