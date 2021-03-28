//
//  testsChallenge16.swift
//  Tests
//
//  Created by Carlos David on 28/02/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge16: XCTestCase {

    func testChallenge16() throws {
        let expected: UInt64 = 1_366
        let obtained = solveChallenge16(1_000)
        XCTAssertEqual(expected, obtained, "Challenge 16")
    }

    func testPerformanceChallenge16() throws {
        measure {
            for _ in 0...2_000 {
                solveChallenge16(100)
            }
        }
    }

}
