//
//  Utilities.swift
//  Tests
//
//  Created by Carlos Álvaro on 4/4/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import Foundation

func changeWorkingDirectory() {
    let packageRootPath = URL(fileURLWithPath: #file).pathComponents.prefix(while: { $0 != "tests"}).joined(separator: "/").dropFirst()
    if !FileManager.default.changeCurrentDirectoryPath(String(packageRootPath)) {
        fatalError("Couldn't change working directory to \(packageRootPath)")
    }
}
