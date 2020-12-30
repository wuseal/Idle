import UIKit
import mpplib
import WebKit

class ViewController: UIViewController {

    @IBOutlet weak var webview: WKWebView!

    var url: String = "https://wwww.baidu.com"

    var urlTitle = ""

    override func viewDidLoad() {
        super.viewDidLoad()
        navigationItem.title = urlTitle
        webview.configuration.allowsInlineMediaPlayback = true
        webview.load(URLRequest(url: URL(string: url)!))
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }

    @IBOutlet weak var label: UILabel!
}
