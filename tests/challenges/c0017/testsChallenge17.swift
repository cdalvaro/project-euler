//
//  testsChallenge17.swift
//  Tests
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge17: XCTestCase {

    func testChallenge17() throws {
        let expected: UInt64 = 21_124
        let obtained = solveChallenge17(1, 1_000)
        XCTAssertEqual(expected, obtained, "Challenge #17")
    }

    func testPerformanceChallenge17() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge17(1, 100)
            }
        }
    }

}
