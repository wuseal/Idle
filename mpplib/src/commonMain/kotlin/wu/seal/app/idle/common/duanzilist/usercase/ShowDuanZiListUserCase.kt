package wu.seal.app.idle.common.duanzilist.usercase

import wu.seal.app.idle.common.base.BaseUseCase
import wu.seal.app.idle.common.base.error.HttpRequestError
import wu.seal.app.idle.common.duanzilist.model.DuanZiListRepository
import wu.seal.app.idle.common.duanzilist.model.DuanZiListResponse
import wu.seal.app.idle.common.duanzilist.view.DuanZiListView

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
class ShowDuanZiListUserCase (private val duanZiListView: DuanZiListView,private val duanZiListRepository: DuanZiListRepository): BaseUseCase {

    override suspend fun execute() {

        val firstPageDataResponse = duanZiListRepository.obtainFirstPageData(firstPageSize = 10)

        if (firstPageDataResponse.responseData != null) {

            val duanziListData: DuanZiListResponse = firstPageDataResponse.responseData

            if (duanziListData.code == 200) {//request success

                duanZiListView.initPage(duanziListData.duanziList)
            } else {
                duanZiListView.showError(HttpRequestError(duanziListData.message))
            }
        } else {
            duanZiListView.showError(HttpRequestError(firstPageDataResponse.error.message ?: ""))
        }
    }
}