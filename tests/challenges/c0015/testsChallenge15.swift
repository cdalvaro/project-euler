//
//  testsChallenge15.swift
//  Tests
//
//  Created by Carlos David on 13/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge15: XCTestCase {

    func testChallenge15() throws {
        let expected: UInt64 = 137_846_528_820
        let obtained = solveChallenge15(20, 20)
        XCTAssertEqual(expected, obtained, "Challenge #15")
    }

    func testPerformanceChallenge15() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge15(10, 10)
            }
        }
    }

}
