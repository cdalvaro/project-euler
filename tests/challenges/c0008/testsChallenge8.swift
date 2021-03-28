//
//  testsChallenge8.swift
//  Tests
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge8: XCTestCase {

    func testChallenge8() throws {
        let expected: UInt64 = 23_514_624_000
        let obtained = solveChallenge8(13)
        XCTAssertEqual(expected, obtained, "Challenge 8")
    }

    func testPerformanceChallenge8() throws {
        measure {
            for _ in 0...5_000 {
                solveChallenge8(20)
            }
        }
    }

}
