//
//  testsChallenge5.swift
//  Tests
//
//  Created by Carlos David on 11/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge5: XCTestCase {

    func testChallenge5() throws {
        let expected: UInt64 = 232_792_560
        let obtained = solveChallenge5(20)
        XCTAssertEqual(expected, obtained, "Challenge 5")
    }

    func testPerformanceChallenge5() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge5(65)
            }
        }
    }

}
