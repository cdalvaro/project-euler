//
//  testsChallenge3.swift
//  Tests
//
//  Created by Carlos David on 28/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge3: XCTestCase {

    func testChallenge3() throws {
        let expected: UInt64 = 6_857
        let obtained = solveChallenge3(600_851_475_143)
        XCTAssertEqual(expected, obtained, "Challenge 3")
    }

    func testPerformanceChallenge3() throws {
        measure {
            for _ in 0...100 {
                solveChallenge3(1_000_000_000)
            }
        }
    }

}
