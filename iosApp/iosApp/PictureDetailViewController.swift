//
//  PictureDetailViewController.swift
//  iosApp
//
//  Created by 吴海豹 on 2019/9/22.
//

import UIKit
import Nuke

class PictureDetailViewController: UIViewController {

    public var pictureUrl = ""

    @IBOutlet weak var pictureDetailImage: UIImageView!//todo on ipad, landscape, the image can't show in fill model,need to fix it

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        let defaultPicURL = URL(string: "https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=3127686775,1344226443&fm=26&gp=0.jpg")!

        if !pictureUrl.isEmpty {
            Nuke.loadImage(with: URL(string: pictureUrl) ?? defaultPicURL, into: pictureDetailImage)
        }

    }


    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
