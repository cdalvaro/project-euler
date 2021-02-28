//
//  testsNamedNumber.swift
//  Tests
//
//  Created by Carlos David on 28/2/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class TestsToolsTypesNamedNumber: XCTestCase {

    func testNamedNumber() throws {
        let number1: Int64 = -1
        let expected1 = NSString("minus one")
        let obtained1 = nameForNumber(number1)!
        let result1 = NSString(cString: obtained1, encoding: String.Encoding.utf8.rawValue)!
        obtained1.deallocate()

        XCTAssertEqual(expected1, result1, "NamedNumber: \(number1)")

        let number2: Int64 = 13
        let expected2 = NSString("thirteen")
        let obtained2 = nameForNumber(number2)!
        let result2 = NSString(cString: obtained2, encoding: String.Encoding.utf8.rawValue)!
        obtained2.deallocate()

        XCTAssertEqual(expected2, result2, "NamedNumber: \(number2)")

        let number3: Int64 = 365
        let expected3 = NSString("three hundred and sixty-five")
        let obtained3 = nameForNumber(number3)!
        let result3 = NSString(cString: obtained3, encoding: String.Encoding.utf8.rawValue)!
        obtained3.deallocate()

        XCTAssertEqual(expected3, result3, "NamedNumber: \(number3)")

        let number4: Int64 = 2_486
        let expected4 = NSString("two thousand four hundred and eighty-six")
        let obtained4 = nameForNumber(number4)!
        let result4 = NSString(cString: obtained4, encoding: String.Encoding.utf8.rawValue)!
        obtained4.deallocate()

        XCTAssertEqual(expected4, result4, "NamedNumber: \(number4)")

        let number5: Int64 = 12_345
        let expected5 = NSString("twelve thousand three hundred and forty-five")
        let obtained5 = nameForNumber(number5)!
        let result5 = NSString(cString: obtained5, encoding: String.Encoding.utf8.rawValue)!
        obtained5.deallocate()

        XCTAssertEqual(expected5, result5, "NamedNumber: \(number5)")

        let number6: Int64 = 9_876_543_210
        let expected6 = NSString("nine billion eight hundred and seventy-six million five hundred and forty-three thousand two hundred and ten")
        let obtained6 = nameForNumber(number6)!
        let result6 = NSString(cString: obtained6, encoding: String.Encoding.utf8.rawValue)!
        obtained6.deallocate()

        XCTAssertEqual(expected6, result6, "NamedNumber: \(number6)")

        let number7: Int64 = 2_000
        let expected7 = NSString("two thousand")
        let obtained7 = nameForNumber(number7)!
        let result7 = NSString(cString: obtained7, encoding: String.Encoding.utf8.rawValue)!
        obtained7.deallocate()

        XCTAssertEqual(expected7, result7, "NamedNumber: \(number7)")
    }

}
