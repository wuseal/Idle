package wu.seal.app.idle.common.piclist.usercases

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.piclist.model.PicListRepository
import wu.seal.app.idle.common.piclist.model.PicListResponse
import wu.seal.app.idle.common.piclist.view.PicListView

/**
 * Created by Seal.Wu on 2019/9/22
 * Description: Show Pic List user case
 */
internal class ShowPicListUserCase(
    private val picListRepository: PicListRepository,
    private val picListView: PicListView,
    pageCount: Int
) : BaseUseCase {
    private val firstPageCount = pageCount//first page show how many items
    override suspend fun execute() {
        val httpResponseData = picListRepository.obtainFirstPageData(firstPageCount = firstPageCount)
        if (httpResponseData.responseData != null) {
            val picListData: PicListResponse = httpResponseData.responseData

            if (picListData.code == 200) {//request success

                picListView.initPage(picListData.pictures)
            } else {
                picListView.showError(HttpRequestError(picListData.message))
            }
        } else {
            picListView.showError(HttpRequestError(httpResponseData.error.message ?: ""))
        }
    }
}