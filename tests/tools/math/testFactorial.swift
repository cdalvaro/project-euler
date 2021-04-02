//
//  testFactorial.swift
//  Tests
//
//  Created by Carlos Álvaro on 29/3/21.
//  Copyright © 2021 cdalvaro. All rights reserved.
//

import XCTest

class testFactorial: XCTestCase {

    func testFactorial10() throws {
        let expected = 3628800.0
        let obtained = factorial(10)
        XCTAssertEqual(expected, obtained, "Factorial 10 (10!)")
    }
    
    func testFactorial20() throws {
        let expected = 2432902008176640000.0
        let obtained = factorial(20)
        XCTAssertEqual(expected, obtained, "Factorial 20 (20!)")
    }
    
    func testFactorial30() throws {
        let expected = NSString("265252859812191058636308480000000")

        let cString = factorialBigInt(30)!
        let obtained = NSString(cString: cString, encoding: String.Encoding.utf8.rawValue)!
        cString.deallocate()

        XCTAssertEqual(expected, obtained, "Factorial 30 (30!)")
    }

    func testPerformanceExample() throws {
        // This is an example of a performance test case.
        self.measure {
            for _ in 0...100_000 {
                _ = factorial(20)
            }
        }
    }

}
