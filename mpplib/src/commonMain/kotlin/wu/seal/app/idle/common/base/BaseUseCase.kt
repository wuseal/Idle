package wu.seal.app.idle.common.base

/**
 * Created by Seal.Wu on 2019-08-10
 * Description: the common logic for all user case
 */
interface BaseUseCase {
    /**
     * perform user case
     */
    suspend fun execute()
}