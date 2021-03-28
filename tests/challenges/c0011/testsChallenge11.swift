//
//  testsChallenge11.swift
//  Tests
//
//  Created by Carlos David on 23/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge11: XCTestCase {

    func testChallenge11() throws {
        let expected: UInt64 = 70_600_674
        let obtained = solveChallenge11(4)
        XCTAssertEqual(expected, obtained, "Challenge 11")
    }

    func testPerformanceChallenge11() throws {
        measure {
            for _ in 0...500 {
                solveChallenge11(4)
            }
        }
    }

}
