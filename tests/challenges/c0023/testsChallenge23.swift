//
//  testsChallenge23.swift
//  Tests
//
//  Created by Carlos Álvaro on 28/01/2022.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge23: XCTestCase {

    func testChallenge23() throws {
        let expected: UInt64 = 4_179_871
        let obtained = solveChallenge23(28_123)
        XCTAssertEqual(obtained, expected, "Challenge 23")
    }

    func testPerformanceChallenge23() throws {
        measure {
            _ = solveChallenge23(28_123)
        }
    }

}
