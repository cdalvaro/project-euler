//
//  Tests.swift
//  Tests
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge1: XCTestCase {

    func testChallenge1() throws {
        let expected = 233_168
        let obtained = solveChallenge1(1_000)
        XCTAssertEqual(expected, obtained, "Challenge #1")
    }

    func testPerformanceChallenge1() throws {
        measure {
            solveChallenge1(1_000_000)
        }
    }

}
