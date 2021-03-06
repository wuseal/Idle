package wu.seal.mpp.idle

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import android.webkit.WebView
import android.webkit.WebViewClient
import kotlinx.android.synthetic.main.activity_web_view.*

class WebViewActivity : BaseActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_web_view)

        val url = intent.getStringExtra("URL")
        val title = intent.getStringExtra("TITLE")
        supportActionBar?.title = title
        setTitle(title)
        webview.settings.javaScriptEnabled = true
        webview.webViewClient = object : WebViewClient() {
            override fun shouldOverrideUrlLoading(view: WebView?, url: String?): Boolean {
                view?.loadUrl(url ?: "")
                return true
            }
        }
        webview.loadUrl(url ?: "")
    }

    companion object {
        fun launch(activity: Activity, url: String, title: String) {
            val intent = Intent(activity, WebViewActivity::class.java)
            intent.putExtra("URL", url)
            intent.putExtra("TITLE", title)
            activity.startActivity(intent)
        }
    }
}
