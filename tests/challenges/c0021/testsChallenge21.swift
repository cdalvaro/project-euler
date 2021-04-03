//
//  testsChallenge21.swift
//  Tests
//
//  Created by Carlos David on 03/04/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge21: XCTestCase {

    func testChallenge21() throws {
        let expected: UInt64 = 31626
        let obtained = solveChallenge21(10_000)
        XCTAssertEqual(obtained, expected, "Challenge 21")
    }

    func testPerformanceChallenge21() throws {
        measure {
            for _ in 0...50 {
                _ = solveChallenge21(3_000)
            }
        }
    }

}
