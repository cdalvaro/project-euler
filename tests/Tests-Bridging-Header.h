//
//  Tests-Bridging-Header.h
//  Tests
//
//  Created by Carlos David on 24/05/2020.
//  Copyright © 2020 cdalvaro. All rights reserved.
//

#ifndef tests_Tests_Bridging_Header_h
#define tests_Tests_Bridging_Header_h

// MARK: - Challenges
long solveChallenge1(long limit);
long solveChallenge2(long limit);
unsigned long long solveChallenge3(unsigned long long limit);
unsigned long long solveChallenge4(unsigned long long number_of_digits, unsigned long long number_of_products);
unsigned long long solveChallenge5(unsigned long long last_number);
unsigned long long solveChallenge6(unsigned long long last_number);
unsigned long long solveChallenge7(unsigned long long nth_prime);
unsigned long long solveChallenge8(unsigned long long number_of_digits);
unsigned long long solveChallenge9(unsigned long long number);
unsigned long long solveChallenge10(unsigned long long limit);
unsigned long long solveChallenge11(unsigned long long numbers_to_take);
unsigned long long solveChallenge12(unsigned long long numbers_of_divisors);
unsigned long long solveChallenge13();
unsigned long long solveChallenge14(unsigned long long maximum_number);
unsigned long long solveChallenge15(unsigned int width, unsigned int height);
unsigned long long solveChallenge16(unsigned int exponent);
unsigned long long solveChallenge17(unsigned int first, unsigned int last);
long long solveChallenge18(long long *triangle, unsigned long long number_of_rows);
unsigned long long solveChallenge19(int first_year, int last_year);

// MARK: - Tools
short throwsToBool(const void (*block)());

// MARK: - Math/Factorial
double factorial(unsigned long long number);
char *factorialBigInt(unsigned long long number);

// MARK: - Types/BigInt
unsigned long long addNumbersAsBigInt(unsigned long long a, unsigned long long b);
char *addNumbersAsBigIntFromChars(const char *a, const char *b);
char *multiplyNumbersAsBigIntFromChars(const char *a, const char *b);
char *mulitplyNumbersAsBigIntProductAssignment(const char *a, const char *b);
short compareBigInt(const char *a, const char *b);
short bigIntEqual(const char *a, const char *b);
short bigIntIsZero(const char *a);
short bigIntIsNil(const char *a);
unsigned long long bigIntToSize_t(const char *a);
char *bigIntToChar(const char *a);

// MARK: - Types/NamedNumber
char *nameForNumber(long long number);

#endif /* tests_Tests_Bridging_Header_h */
