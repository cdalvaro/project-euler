//
//  testsChallenge4.swift
//  Tests
//
//  Created by Carlos David on 31/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge4: XCTestCase {

    func testChallenge4() throws {
        let expected: UInt64 = 906_609
        let obtained = solveChallenge4(3, 2)
        XCTAssertEqual(expected, obtained, "Challenge #4")
    }

    func testPerformanceChallenge4() throws {
        measure {
            for _ in 0...1_000 {
                solveChallenge4(2, 2)
            }
        }
    }

}
