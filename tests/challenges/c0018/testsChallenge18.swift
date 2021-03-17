//
//  testsChallenge18.swift
//  Tests
//
//  Created by Carlos David on 17/03/2021.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsChallenge18: XCTestCase {

    func testChallenge18() throws {
        let triangle: Array<Int64> = [
            75,
            95, 64,
            17, 47, 82,
            18, 35, 87, 10,
            20, 04, 82, 47, 65,
            19, 01, 23, 75, 03, 34,
            88, 02, 77, 73, 07, 63, 67,
            99, 65, 04, 28, 06, 16, 70, 92,
            41, 41, 26, 56, 83, 40, 80, 70, 33,
            41, 48, 72, 33, 47, 32, 37, 16, 94, 29,
            53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,
            70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,
            91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,
            63, 66, 04, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,
            04, 62, 98, 27, 23, 09, 70, 98, 73, 93, 38, 53, 60, 04, 23
        ]

        let pointer = UnsafeMutablePointer<Int64>.allocate(capacity: triangle.count)
        pointer.initialize(from: triangle, count: triangle.count)

        let expected: Int64 = 1_074
        let obtained = solveChallenge18(pointer, UInt64(triangle.count))
        XCTAssertEqual(expected, obtained, "Challenge #18")

        pointer.deinitialize(count: triangle.count)
        pointer.deallocate()
    }

    func testPerformanceChallenge18() throws {
        let triangle: Array<Int64> = [
            3,
            7, 4,
            2, 4, 6,
            8, 5, 9, 3,
            5, 6, 3, 7, 9,
            7, 1, 6, 3, 8, 4,
            9, 3, 8, 2, 7, 1, 5
        ]

        let pointer = UnsafeMutablePointer<Int64>.allocate(capacity: triangle.count)
        pointer.initialize(from: triangle, count: triangle.count)

        measure {
            for _ in 0...1_000 {
                solveChallenge18(pointer, UInt64(triangle.count))
            }
        }

        pointer.deinitialize(count: triangle.count)
        pointer.deallocate()
    }

}
