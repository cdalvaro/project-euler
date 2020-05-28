//
//  testsChallenge2.swift
//  Tests
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge2: XCTestCase {

    func testChallenge2() throws {
        let expected = 4_613_732
        let obtained = solveChallenge2(4_000_000)
        XCTAssertEqual(expected, obtained, "Challenge #2")
    }

    func testPerformanceChallenge2() throws {
        measure {
            for _ in 0...10_000 {
                solveChallenge2(10_000_000)
            }
        }
    }

}
