//
//  testsChallenge14.swift
//  Tests
//
//  Created by Carlos David on 27/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge14: XCTestCase {

    func testChallenge14() throws {
        let expected: UInt64 = 837_799
        let obtained = solveChallenge14(1_000_000)
        XCTAssertEqual(expected, obtained, "Challenge 14")
    }

    func testPerformanceChallenge14() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge14(100)
            }
        }
    }

}
