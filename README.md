# Soumyadeep-Chatterjee

## Problem 1: Calculator
**Description:**
Create a small calculator that performs Addition, Subtraction, Multiplication, and Division using a class. The calculator takes two double values (`a`, `b`) and a string for the operation type.

**Logic:**
- A `Calculator` class is defined with a constructor accepting `a`, `b`, and the operation type.
- The `calculate()` method checks the operation type (add, subtract, multiply, divide or their symbols) and performs the corresponding operation.
- Division by zero is handled with an error message.
- The user is prompted for input and the result is displayed.

## Problem 2: Odd Number Series
**Description:**
Given an integer `a`, print the first `a` odd numbers in sequence (e.g., for `a=4`, output: 1, 3, 5, 7).

**Logic:**
- A loop runs from 0 to `a-1`.
- For each iteration, the next odd number is calculated as `2*i+1` and printed.
- Numbers are separated by commas.

## Problem 3: Conditional Odd Number Series
**Description:**
Given an integer `a`, print the first `a` odd numbers, but only up to the largest odd number less than or equal to `a` (e.g., for `a=4`, output: 1, 3, 5).

**Logic:**
- A loop generates odd numbers starting from 1.
- The loop prints up to `a` numbers, but does not exceed the value `2*a-1`.
- Numbers are separated by commas.

## Problem 4: Multiples Count in a List
**Description:**
Given a list of integers, count how many numbers are multiples of each number from 1 to 9.

**Logic:**
- A vector holds the input numbers.
- A map is used to count multiples for each number from 1 to 9.
- For each number in the list, check divisibility by 1 to 9 and increment the corresponding count.
- The result is printed as a dictionary.
