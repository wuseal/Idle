package wu.seal.mpp.idle.piclist

import android.app.Activity
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import com.bumptech.glide.Glide
import kotlinx.android.synthetic.main.picture_item.view.*
import wu.seal.app.idle.common.piclist.model.PicListResponse
import wu.seal.mpp.idle.R

/**
 * Created by Seal.Wu on 2019/9/22
 * Description:
 */
class PicListAdapter : RecyclerView.Adapter<PicListAdapter.ViewHolder>() {

    private val picList = mutableListOf<PicListResponse.Picture>()

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val item = LayoutInflater.from(parent.context).inflate(R.layout.picture_item, parent, false)
        return ViewHolder(item)
    }

    override fun getItemCount(): Int {
        return picList.size
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val pic = picList[position]
        holder.time.text = pic.time
        Glide.with(holder.itemView.context).load(pic.img).into(holder.image)
        holder.itemView.setOnClickListener {
            PicDetailActivity.launch(it.context as Activity, pic.img)
        }
    }

    fun init(pictures: List<PicListResponse.Picture>) {
        picList.clear()
        picList.addAll(pictures)
        notifyDataSetChanged()
    }

    fun addMoreData(pictures: List<PicListResponse.Picture>) {
        picList.addAll(pictures)
        notifyDataSetChanged()
    }


    class ViewHolder(
        itemView: View,
        val image: ImageView = itemView.pic_item_image,
        val time: TextView = itemView.pic_item_time
    ) : RecyclerView.ViewHolder(itemView)
}