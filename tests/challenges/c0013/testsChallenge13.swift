//
//  testsChallenge13.swift
//  Tests
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge13: XCTestCase {

    func testChallenge13() throws {
        let expected: UInt64 = 5_537_376_230
        let obtained = solveChallenge13()
        XCTAssertEqual(expected, obtained, "Challenge 13")
    }

    func testPerformanceChallenge13() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge13()
            }
        }
    }

}
