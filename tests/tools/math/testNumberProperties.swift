//
//  testNumberProperties.swift
//  Tests
//
//  Created by Carlos Álvaro on 28/1/22.
//  Copyright © 2022 cdalvaro. All rights reserved.
//

import XCTest

class TestNumberProperties: XCTestCase {

    func testIsAbundant() throws {
        // Not abundant numbers
        var expected = false
        var obtained = isAbundant(6).boolValue
        XCTAssertEqual(expected, obtained, "6 is not an abundant number")

        obtained = isAbundant(10).boolValue
        XCTAssertEqual(expected, obtained, "10 is not an abundant number")

        // Abundant numbers
        expected = true
        obtained = isAbundant(12).boolValue
        XCTAssertEqual(expected, obtained, "12 is an abundant number")

        obtained = isAbundant(40).boolValue
        XCTAssertEqual(expected, obtained, "40 is an abundant number")

        obtained = isAbundant(66).boolValue
        XCTAssertEqual(expected, obtained, "66 is an abundant number")
    }

    func testPerformanceIsAbundant() throws {
        self.measure {
            for _ in 0...50_000 {
                _ = isAbundant(12)
            }
        }
    }

    func testIsDeficient() throws {
        // Not deficient numbers
        var expected = false
        var obtained = isDeficient(6).boolValue
        XCTAssertEqual(expected, obtained, "6 is not a deficient number")

        obtained = isDeficient(12).boolValue
        XCTAssertEqual(expected, obtained, "12 is not a deficient number")

        // Deficient numbers
        expected = true
        obtained = isDeficient(10).boolValue
        XCTAssertEqual(expected, obtained, "10 is a deficient number")

        obtained = isDeficient(14).boolValue
        XCTAssertEqual(expected, obtained, "14 is a deficient number")

        obtained = isDeficient(19).boolValue
        XCTAssertEqual(expected, obtained, "19 is a deficient number")
    }

    func testPerformanceIsDeficient() throws {
        self.measure {
            for _ in 0...50_000 {
                _ = isDeficient(10)
            }
        }
    }

    func testIsPerfect() throws {
        // Not perfect numbers
        var expected = false
        var obtained = isPerfect(10).boolValue
        XCTAssertEqual(expected, obtained, "10 is not a perfect number")

        obtained = isPerfect(12).boolValue
        XCTAssertEqual(expected, obtained, "12 is not a perfect number")

        // Perfect numbers
        expected = true
        obtained = isPerfect(6).boolValue
        XCTAssertEqual(expected, obtained, "6 is a perfect number")

        obtained = isPerfect(28).boolValue
        XCTAssertEqual(expected, obtained, "28 is a perfect number")

        obtained = isPerfect(496).boolValue
        XCTAssertEqual(expected, obtained, "496 is a perfect number")

        obtained = isPerfect(8128).boolValue
        XCTAssertEqual(expected, obtained, "8128 is a perfect number")
    }

    func testPerformanceIsPerfect() throws {
        self.measure {
            for _ in 0...50_000 {
                _ = isPerfect(10)
            }
        }
    }

}
