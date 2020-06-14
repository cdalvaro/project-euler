//
//  testsChallenge7.swift
//  Tests
//
//  Created by Carlos David on 14/06/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge7: XCTestCase {

    func testChallenge7() throws {
        let expected: UInt64 = 104_743
        let obtained = solveChallenge7(10_001)
        XCTAssertEqual(expected, obtained, "Challenge #7")
    }

    func testPerformanceChallenge7() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge7(100)
            }
        }
    }

}
