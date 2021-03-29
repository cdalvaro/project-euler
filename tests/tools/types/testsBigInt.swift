//
//  testsChallenge13.swift
//  Tests
//
//  Created by Carlos David on 25/07/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

import XCTest

class TestsToolsTypesBigInt: XCTestCase {

    func testAdditionWithSmallNumbers() throws {
        let numberA: UInt64 = 99
        let numberB: UInt64 = 999
        XCTAssertEqual(numberA + numberB,
                       addNumbersAsBigInt(numberA, numberB),
                       "BigInt addition with small numbers")
    }
    
    func testAdditionWithBigNumbers() throws {
        let numberA = NSString("97107287533902102798797998220837590246510135740250").utf8String
        let numberB = NSString("96376937677490009712648124896970078050417018260538").utf8String
        
        let expected = NSString("193484225211392112511446123117807668296927154000788")
        
        let cString = addNumbersAsBigIntFromChars(numberA, numberB)!
        let result = NSString(cString: cString, encoding: String.Encoding.utf8.rawValue)!
        cString.deallocate()
        
        XCTAssertEqual(expected, result, "BigInt addition with big numbers")
    }
    
    func testEquality() throws {
        let numberA = NSString("97107287533902102798797998220837590246510135740250").utf8String
        let numberB = NSString("96376937677490009712648124896970078050417018260538").utf8String
        
        XCTAssertEqual(compareBigInt(numberA, numberB), 1, "A is greater than B")
        XCTAssertEqual(compareBigInt(numberB, numberA), -1, "B is smaller than A")
        XCTAssertEqual(compareBigInt(numberA, numberA), 0, "A is equal to B")
        
        XCTAssertTrue(bigIntEqual(numberA, numberA) == 1)
        XCTAssertTrue(bigIntEqual(numberA, numberB) == 0)
        
        let numberC = NSString("963769376774900097126481248").utf8String
        XCTAssertEqual(compareBigInt(numberA, numberC), 1, "A is greater than C")
        XCTAssertTrue(bigIntEqual(numberA, numberC) == 0)
    }

    func testPerformanceBigIntAddition() throws {
        let numberA = NSString("37107287533902102798797998220837590246510135740250").utf8String
        let numberB = NSString("46376937677490009712648124896970078050417018260538").utf8String
        measure {
            for _ in 0...10_000 {
                addNumbersAsBigIntFromChars(numberA, numberB).deallocate()
            }
        }
    }
    
    func testPerformanceBigIntLowerThanComparison() throws {
        let numberA = NSString("371072875339021027984637693767749000971264813").utf8String
        let numberB = NSString("371072875339021027984637693767749000971264812").utf8String
        measure {
            for _ in 0...10_000 {
                _ = compareBigInt(numberA, numberB)
            }
        }
    }
    func testPerformanceBigIntLowerThanComparisonShortNumber() throws {
        let numberA = NSString("371072875339021027984637693767749000971264813").utf8String
        let numberB = NSString("37107287533902102798463769").utf8String
        measure {
            for _ in 0...10_000 {
                _ = compareBigInt(numberA, numberB)
            }
        }
    }
    
    func testPerformanceBigIntEqualComparison() throws {
        let numberA = NSString("371072875339021027984637693767749000971264813").utf8String
        let numberB = NSString("371072875339021027984637693767749000971264812").utf8String
        measure {
            for _ in 0...10_000 {
                _ = bigIntEqual(numberA, numberB)
            }
        }
    }
    
    func testPerformanceBigIntEqualComparisonShortNumber() throws {
        let numberA = NSString("371072875339021027984637693767749000971264813").utf8String
        let numberB = NSString("37107287533902102798463").utf8String
        measure {
            for _ in 0...10_000 {
                _ = bigIntEqual(numberA, numberB)
            }
        }
    }

}
