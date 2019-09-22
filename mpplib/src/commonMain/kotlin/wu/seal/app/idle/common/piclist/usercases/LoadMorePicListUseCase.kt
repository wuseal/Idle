package wu.seal.app.idle.common.piclist.usercases

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.piclist.model.PicListRepository
import wu.seal.app.idle.common.piclist.model.PicListResponse
import wu.seal.app.idle.common.piclist.view.PicListView

/**
 * Created by Seal.Wu on 2019/9/22
 * Description: User case to load more picture list to render the page
 */
internal class LoadMorePicListUseCase(
    private val picListRepository: PicListRepository,
    private val picListView: PicListView,
    pageCount: Int
) : BaseUseCase {

    private var currentPage = 2 //load more initial page is 2, because the first page is 1

    private val loadMoreEveryPageCount = pageCount //how many items every page will show

    override suspend fun execute() {
        val responseData = picListRepository.obtainData(pageIndex = currentPage, pageCount = loadMoreEveryPageCount)
        if (responseData.responseData != null) {
            val picListResponse: PicListResponse =
                responseData.responseData
            if (picListResponse.code == 200) {
                picListView.showMoreData(picListResponse.pictures)
                if (picListResponse.pictures.size < loadMoreEveryPageCount) {
                    picListView.showNoMoreDataTip()
                    picListView.disableLoadMore()
                } else {
                    currentPage++//page add 1, then next execute this user case will load next page data
                }
            } else {
                picListView.showError(HttpRequestError(picListResponse.message))
            }
        } else {
            picListView.showError(HttpRequestError(responseData.error.message ?: ""))
        }
    }


}