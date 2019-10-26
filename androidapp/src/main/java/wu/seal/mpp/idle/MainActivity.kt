package wu.seal.mpp.idle

import android.Manifest
import android.os.Bundle
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager
import androidx.fragment.app.FragmentPagerAdapter
import androidx.viewpager.widget.ViewPager
import io.flutter.facade.Flutter
import kotlinx.android.synthetic.main.activity_main.*
import luyao.util.ktx.ext.permission.request
import java.lang.UnsupportedOperationException

class MainActivity : BaseActivity() {

    private val tabIds = arrayListOf(R.id.news_list, R.id.pic_list, R.id.duanzi_list)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        supportActionBar?.title = "小娱乐Idle"
        request(Manifest.permission.WRITE_EXTERNAL_STORAGE, Manifest.permission.READ_EXTERNAL_STORAGE) {
            initMainPage()
        }
    }

    private fun initMainPage() {

        viewPager.offscreenPageLimit = 2
        viewPager.adapter = MainPageFragmentAdapter(supportFragmentManager)

        tabGroup.setOnCheckedChangeListener { _, checkedId ->
            viewPager.currentItem = tabIds.indexOf(checkedId)
        }
        viewPager.addOnPageChangeListener(object : ViewPager.SimpleOnPageChangeListener() {
            override fun onPageSelected(position: Int) {
                tabGroup.check(tabIds[position])
            }
        })

    }

    class MainPageFragmentAdapter(fragmentManager: FragmentManager) : FragmentPagerAdapter(
        fragmentManager,
        BEHAVIOR_RESUME_ONLY_CURRENT_FRAGMENT
    ) {

        private val duanziFlutterFragment = DuanZiListFragment.create()
        private val newsListFragment = NewsListFragment()
        private val picListFragment = PicListFragment.newInstance()

        override fun getItem(position: Int): Fragment {
            return when (position) {
                0 -> newsListFragment
                1 -> picListFragment
                2 -> duanziFlutterFragment
                else -> throw UnsupportedOperationException("不支持当前的item索引: $position")
            }
        }

        override fun getCount(): Int {
            return 3
        }
    }

}