# [Challenge 14 - Longest Collatz sequence](https://projecteuler.net/problem=14)

## Description

The following iterative sequence is defined for the set of positive integers:

> n → n/2 (n is even)  
> n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

> 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved
yet ([Collatz Problem](https://mathworld.wolfram.com/CollatzProblem.html)), it is thought that all starting numbers
finish at 1.

## Exercise

Which starting number, under one million, produces the longest chain?

**NOTE**: Once the chain starts the terms are allowed to go above one million.

## Solution

You can find the algorithm to solve this challenge inside [challenge.cpp](challenge.cpp), and the implementation of the
Collatz sequence can be found inside [tools/math/squences/collatz.cpp](../../tools/math/sequences/collatz.cpp)

<details>
  <summary>Click here to see the result!</summary>

Result is: `837,799`
</details>
