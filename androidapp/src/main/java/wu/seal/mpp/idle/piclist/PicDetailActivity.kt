package wu.seal.mpp.idle.piclist

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import androidx.annotation.Keep
import com.bumptech.glide.Glide
import kotlinx.android.synthetic.main.activity_detail_picture.*
import wu.seal.mpp.idle.BaseActivity
import wu.seal.mpp.idle.R

/**
 * Created by Seal.Wu on 2019/9/22
 * Description:
 */
class PicDetailActivity : BaseActivity() {

    companion object {
        private val IMAGE_URL = "IMAGE_URL_OF_DETAIL_PICTURE"
        fun launch(activity: Activity, imageUrl: String) {
            activity.startActivity(Intent(activity,PicDetailActivity::class.java).apply {
                putExtra(IMAGE_URL,imageUrl)
            })
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_detail_picture)
        val imageUrl = intent.getStringExtra(IMAGE_URL)
        imageUrl?.let {
            Glide.with(this).load(imageUrl).into(pic_detail)
        }
    }

}