//
//  testsChallenge9.swift
//  Tests
//
//  Created by Carlos David on 15/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge9: XCTestCase {

    func testChallenge9() throws {
        let expected: UInt64 = 31_875_000
        let obtained = solveChallenge9(1_000)
        XCTAssertEqual(expected, obtained, "Challenge #9")
    }

    func testPerformanceChallenge9() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge9(1_000)
            }
        }
    }

}
