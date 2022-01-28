//
//  TestsExtensions.swift
//  Tests
//
//  Created by Carlos Álvaro on 28/1/22.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

import Foundation

extension Int16 {
    var boolValue: Bool {
        return (self as NSNumber).boolValue
    }
}
