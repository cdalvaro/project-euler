//
//  testsChallenge19.swift
//  Tests
//
//  Created by Carlos David on 27/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge19: XCTestCase {

    func testChallenge19() throws {
        let expected: UInt64 = 171
        let obtained = solveChallenge19(1901, 2000)
        XCTAssertEqual(expected, obtained, "Challenge #19")
    }

    func testPerformanceChallenge18() throws {
        measure {
            for _ in 0...100 {
                _ = solveChallenge19(1901, 1924)
            }
        }
    }

}
