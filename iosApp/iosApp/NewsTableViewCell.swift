//
//  NewsTableViewCell.swift
//  iosApp
//
//  Created by 吴海豹 on 2019/8/17.
//

import UIKit

class NewsTableViewCell: UITableViewCell {

    @IBOutlet weak var newsHead: UIImageView!
        
    @IBOutlet weak var newsTitle: UILabel!
    @IBOutlet weak var time: UILabel!
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
