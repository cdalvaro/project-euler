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

    func testPerformanceBigIntAddition() throws {
        let numberA = NSString("37107287533902102798797998220837590246510135740250").utf8String
        let numberB = NSString("46376937677490009712648124896970078050417018260538").utf8String
        measure {
            for _ in 0...10_000 {
                addNumbersAsBigIntFromChars(numberA, numberB).deallocate()
            }
        }
    }

}
