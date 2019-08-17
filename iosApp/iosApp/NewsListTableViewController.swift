//
//  TableViewController.swift
//  iosApp
//
//  Created by 吴海豹 on 2019/8/17.
//

import UIKit
import mpplib
import Toaster
import Nuke

class NewsListTableViewController: UITableViewController, NewsListView {

    private var news: [News] = []

    private var presenter: NewsListPresenter? = nil

    private var couldLoadMore = true

    func showError(throwable: KotlinThrowable) {
        Toast(text: throwable.message).show()
    }

    func doInitWithData(newsList: [News]) {
        news.removeAll()
        news += newsList
        tableView.reloadData()
    }

    func showNoAnyMore() {
        Toast(text: "Not any more news").show()
    }

    func appendItems(appendData: [News]) {
        news += appendData
        tableView.reloadData()
    }

    func disableLoadMore() {
        couldLoadMore = false
    }


    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.rowHeight = 80
        presenter = NewsListPresenter(uiContext: UIDispatcher(), newsListView: self)

        presenter?.executeLoadMoreNewsListUserCase()
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return news.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let defaultPicURL = URL(string: "https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=3127686775,1344226443&fm=26&gp=0.jpg")!

        let cellIdentifier = "NewsTableViewCell"
        guard let cell = tableView.dequeueReusableCell(withIdentifier: cellIdentifier, for: indexPath) as? NewsTableViewCell else {
            fatalError("The dequeued cell is not an instance of NewsTableViewCell.")
        }
        let newsItem = news[indexPath.row]
        cell.newsTitle.text = newsItem.title
        Nuke.loadImage(with: URL(string: newsItem.image) ?? defaultPicURL, into: cell.newsHead)

        //when visible last item and could load more able, do the load more function
        if (indexPath.row == news.count - 1 && couldLoadMore) {
            presenter?.executeLoadMoreNewsListUserCase()
        }

        return cell
    }

    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        super.prepare(for: segue, sender: sender)
        guard  let webController = segue.destination as? ViewController else {
            fatalError("Unexpected destination: \(segue.destination)")
        }
        guard let selectedNewsCell = sender as? NewsTableViewCell else {
            fatalError("Unexpected sender: \(String(describing: sender))")
        }
        guard let indexPath = tableView.indexPath(for: selectedNewsCell) else {
            fatalError("The selected cell is not being displayed by the table")
        }
        let selectedNews = news[indexPath.row]

        webController.urlTitle = selectedNews.title
        webController.url = selectedNews.path
    }

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCell.EditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
