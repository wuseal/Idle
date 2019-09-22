//
//  PictureItemTableViewCell.swift
//  iosApp
//
//  Created by 吴海豹 on 2019/9/22.
//

import UIKit

class PictureItemTableViewCell: UITableViewCell {

    @IBOutlet weak var pictureImageView: UIImageView!
    
    @IBOutlet weak var labelTime: UILabel!
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
