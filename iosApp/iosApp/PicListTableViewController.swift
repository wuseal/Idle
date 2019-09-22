//
//  PicListTableViewController.swift
//  iosApp
//
//  Created by 吴海豹 on 2019/9/22.
//

import UIKit
import mpplib
import Toaster
import Nuke
/**
*
* todo: 图片列表滑动到新的10条数据时候差不多会有一个闪动现象，而且闪过后原来滑到的图片位置会闪到别的位置上，这个需要改进
*/
class PicListTableViewController: UITableViewController, PicListView {

    private let tag = "PicListTableViewController"
    private var couldLoadMore = true

    private var pictures: [PicListResponse.Picture] = []

    private var presenter: PicListPresenter? = nil //todo need to find out why I can't initial this object here and could initial in viewDidLoad()

    func doInitPage(pictures: [PicListResponse.Picture]) {
        self.pictures.removeAll(keepingCapacity: false)
        self.pictures += pictures
        self.tableView.reloadData()
    }

    func showMoreData(pictures: [PicListResponse.Picture]) {
        self.pictures += pictures
        self.tableView.reloadData()
    }

    func showNoMoreDataTip() {
        Toast(text: "Not any more pictures").show()
    }

    func disableLoadMore() {
        couldLoadMore = false
    }

    func showError(throwable: KotlinThrowable) {
        Toast(text: throwable.message).show()
    }


    override func viewDidLoad() {
        super.viewDidLoad()
        let rowHeight = self.view.frame.width / 2
        LogUtil().i(tag: tag, message: "row height is \(rowHeight)")
        tableView.rowHeight = rowHeight
        presenter = PicListPresenter(uiContext: UIDispatcher(), picListView: self)
        presenter?.doInitFirstPage()
        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        pictures.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let defaultPicURL = URL(string: "https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=3127686775,1344226443&fm=26&gp=0.jpg")!

        guard let cell = tableView.dequeueReusableCell(withIdentifier: "pictureListItem", for: indexPath) as? PictureItemTableViewCell else {
            fatalError("The dequeued cell is not an instance of PictureItemTableViewCell.")
        }
        let picture = pictures[indexPath.row]
        Nuke.loadImage(with: URL(string: picture.img) ?? defaultPicURL, into: cell.pictureImageView)
        cell.labelTime.text = picture.time
        //when visible last item and could load more able, do the load more function
        if (indexPath.row == pictures.count - 1 && couldLoadMore) {
            presenter?.loadMorePage()
        }
        return cell
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

    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
        guard  let pictureDetailController = segue.destination as? PictureDetailViewController else {
            fatalError("Unexpected destination: \(segue.destination)")
        }
        guard let selectedPictureCell = sender as? PictureItemTableViewCell else {
            fatalError("Unexpected sender: \(String(describing: sender))")
        }
        guard let indexPath = tableView.indexPath(for: selectedPictureCell) else {
            fatalError("The selected cell is not being displayed by the table")
        }
        let selectedPicture = self.pictures[indexPath.row]
        pictureDetailController.pictureUrl = selectedPicture.img
    }

}
