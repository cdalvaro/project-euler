//
//  testsChallenge12.swift
//  Tests
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge12: XCTestCase {

    func testChallenge12() throws {
        let expected: UInt64 = 76_576_500
        let obtained = solveChallenge12(500)
        XCTAssertEqual(expected, obtained, "Challenge 12")
    }

    func testPerformanceChallenge12() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge12(30)
            }
        }
    }

}
