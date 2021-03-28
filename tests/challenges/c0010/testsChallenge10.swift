//
//  testsChallenge10.swift
//  Tests
//
//  Created by Carlos David on 22/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge10: XCTestCase {

    func testChallenge10() throws {
        let expected: UInt64 = 142_913_828_922
        let obtained = solveChallenge10(2_000_000)
        XCTAssertEqual(expected, obtained, "Challenge 10")
    }

    func testPerformanceChallenge10() throws {
        measure {
            for _ in 0...2_000 {
                solveChallenge10(2_000)
            }
        }
    }

}
