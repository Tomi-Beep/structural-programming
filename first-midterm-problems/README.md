# First Midterm Problems

## Problem 1: Numbers with Divisible Middle-Digit Product

Read from SI two integers `a` and `b`. Write a program that will:

1. Print all numbers from `a` to `b` (`a < b`) that satisfy the following conditions:
   - The number created as a product of the digits from the next-to-the-first to the next-to-last digit (middle digits) is divisible by the number created from the last and the first digit.
   - Do not print numbers where the product of the middle digits is `0`.

2. For each number that satisfies the condition, print the equation representing the condition. For example:
   - `55650 -> (150 == 50 * 3)`
     - `150` is the product of the middle digits: `5 * 6 * 5`
     - `50` is constructed from the first digit (`5`) and the last digit (`0`).

3. At the end, print the count of such numbers.

## Problem 2: Square Image of Characters

Using the characters `+` and `-`, form a square image with "width" `n` (`n > 2`) that represents a square of the characters `-`, enclosed by a square of characters `+`.

### Instructions

1. For a given `n`, print the appropriate image.
2. The output must adhere to the following rules:
   - Do not print additional characters as empty spaces or unnecessary new lines.
   - The image ends with a new line character.
   - Do not use any matrix or arrays because `n` is not limited.

### Examples

For `n = 3`:
```
+++
+-+
+++
```

For `n = 5`:
```
+++++
+---+
+---+
+---+
+++++
```

## Problem 3: Check Age Eligibility

From SI, read one number that represents today's date in the format `DDMMYYYY` (`DD` - day, `MM` - month, `YYYY` - year). Then, read one integer `N`. After that, read `N` dates of birth in the same format.

### Instructions

For each of the `N` dates of birth:
1. Print `YES` if, on today's date (read at the beginning), the person with that date of birth is **18 years or older**.
2. Otherwise, print `NO`.

### Example

Input:
```
25032025
3
25032007
26032007
25032006
```

Output:
```
YES
NO
YES
```

## Problem 4: Reversed Middle-Digit Divisibility

Read from SI two integers `a` and `b`. Write a program that will:

1. Print all numbers from `a` to `b` (`a < b`) that satisfy the following conditions:
   - The number created from all the digits from the next-to-the-first to the next-to-last digit in the original number (the digits that remain if we remove the first and the last digit) **reversed** (read from right to left) is divisible by the number created as the sum of the first and the last digit.
   - For single and two-digit numbers, the number created from the middle digits is `0`, and these numbers are not printed.

2. For each number that satisfies the condition, print the equation representing the condition. For example:
   - `82675 -> (762 == (8 + 5) * 13)`
     - `762` is the reversed number created from the middle digits: `7, 6, 2`.
     - `(8 + 5) = 13` is the sum of the first (`8`) and last (`5`) digit.

3. At the end, print the count of such numbers.

### Example

Input:
```
100 200
```

Output:
```
291 -> (9 == (1 + 2) * 3)
84575 -> (754 == (5 + 8) * 58)
Count: 2
```

## Problem 5: Minimum Difference in Triplets

Read from SI an unknown number of triplets of integers (three integers). The reading ends when the program cannot successfully read three integers.

### Instructions

1. For each triplet of integers, print the two integers with the minimum difference between them:
   - Print the smaller integer first, followed by the larger integer.
   - If two pairs of integers in the triplet have equal differences, print all the integers in the triplet, ordered from the smallest to the largest.

### Example

Input:
```
5 1 7
10 2 18
```

Output:
```
5 7
2 10 18
```
