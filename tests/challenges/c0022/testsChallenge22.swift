//
//  testsChallenge22.swift
//  Tests
//
//  Created by Carlos David on 04/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge22: XCTestCase {

    override class func setUp() {
        changeWorkingDirectory()
    }

    func testChallenge22() throws {
        let expected: UInt64 = 871_198_282
        let obtained = solveChallenge22(NSString("challenges/c0022/names.txt").utf8String)
        XCTAssertEqual(obtained, expected, "Challenge 22")
    }

    func testPerformanceChallenge22() throws {
        measure {
            _ = solveChallenge22(NSString("challenges/c0022/names.txt").utf8String)
        }
    }

}
