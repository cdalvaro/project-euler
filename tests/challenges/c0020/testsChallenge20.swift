//
//  testsChallenge20.swift
//  Tests
//
//  Created by Carlos David on 29/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge20: XCTestCase {

    func testChallenge20() throws {
        let expected: UInt64 = 648
        let obtained = solveChallenge20(100)
        XCTAssertEqual(expected, obtained, "Challenge 20")
    }

    func testPerformanceChallenge20() throws {
        measure {
            for _ in 0...2_000 {
                solveChallenge20(10)
            }
        }
    }

}
