//
//  UIImage+Rokomari.swift
//  StartUp
//
//  Created by Towhid Islam on 10/25/16.
//  Copyright © 2018 ITSoulLab (https://www.itsoullab.com). All rights reserved.
//

import Foundation
import UIKit

extension UIImage{
    
    convenience init!(catalog: AssetCatalog) {
        self.init(named: catalog.rawValue)
    }
    
    func resize(_ size:CGSize, at scale:CGFloat) -> UIImage{
        UIGraphicsBeginImageContextWithOptions(size, false, scale)
        draw(in: CGRect(x: 0, y: 0, width: size.width, height: size.height))
        let normalizedImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        return normalizedImage!
    }
    
}
