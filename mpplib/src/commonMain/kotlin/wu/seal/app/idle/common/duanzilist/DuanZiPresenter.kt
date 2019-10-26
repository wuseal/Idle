package wu.seal.app.idle.common.duanzilist

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.launch
import wu.seal.app.idle.common.base.BasePresenter
import wu.seal.app.idle.common.duanzilist.model.DuanZiListRepository
import wu.seal.app.idle.common.duanzilist.model.DuanZiListRepositoryImp
import wu.seal.app.idle.common.duanzilist.usercase.LoadMoreDuanZiListUserCase
import wu.seal.app.idle.common.duanzilist.usercase.ShowDuanZiListUserCase
import wu.seal.app.idle.common.duanzilist.view.DuanZiListView

/**
 * Created by Seal.Wu on 2019/10/20
 * Description:
 */
class DuanZiPresenter(uiContext: CoroutineDispatcher, private val duanZiListView: DuanZiListView) :
    BasePresenter(uiContext, duanZiListView) {

    private val repository: DuanZiListRepository = DuanZiListRepositoryImp()

    private val showFirstPageUserCase by lazy { ShowDuanZiListUserCase(duanZiListView, repository) }
    private val loadMoreUserCase by lazy { LoadMoreDuanZiListUserCase(duanZiListView, repository) }

    fun initFirstPage() {
        launch {
            showFirstPageUserCase.execute()
        }
    }

    fun loadMore() {
        launch {
            loadMoreUserCase.execute()
        }
    }
}