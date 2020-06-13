//
//  testsChallenge6.swift
//  Tests
//
//  Created by Carlos David on 13/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge6: XCTestCase {

    func testChallenge6() throws {
        let expected: UInt64 = 25_164_150
        let obtained = solveChallenge6(100)
        XCTAssertEqual(expected, obtained, "Challenge #6")
    }

    func testPerformanceChallenge6() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge6(100)
            }
        }
    }

}
