package wu.seal.app.idle.common.piclist

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.launch
import wu.seal.app.idle.common.base.BasePresenter
import wu.seal.app.idle.common.piclist.model.PicListRepository
import wu.seal.app.idle.common.piclist.model.PicListRepositoryImp
import wu.seal.app.idle.common.piclist.usercases.LoadMorePicListUseCase
import wu.seal.app.idle.common.piclist.usercases.ShowPicListUserCase
import wu.seal.app.idle.common.piclist.view.PicListView

/**
 * Created by Seal.Wu on 2019/9/22
 * Description: Picture List Page Presenter
 */
class PicListPresenter(uiContext: CoroutineDispatcher, private val picListView: PicListView) :
    BasePresenter(uiContext, picListView) {

    private val picListRepository: PicListRepository = PicListRepositoryImp()

    private val pageCount = 10//Every page show item counts

    private val firstPageUserCase: ShowPicListUserCase by lazy {
        ShowPicListUserCase(
            picListRepository,
            picListView,
            pageCount
        )
    }

    private val loadMoreUserCase: LoadMorePicListUseCase by lazy {
        LoadMorePicListUseCase(picListRepository, picListView, pageCount)
    }

    /**
     * init the first page
     */
    fun initFirstPage() {
        launch {
            firstPageUserCase.execute()
        }
    }

    /**
     * load next page
     */
    fun loadMorePage() {
        launch {
            loadMoreUserCase.execute()
        }
    }

}