# Second midterm and exam problems

## Problem 1: Letter-by-Letter Cyclic Coding
Write a program that will print the contents read from SI coded. The coding is done letter by letter, so that each letter (only letters, not digits, dots, etc.) is replaced with the letter 3 places after in the alphabet. For letters at the end of the alphabet, the counting continues cyclically from the beginning. All letters in the final coded text should be lowercase.

**Example:**

Input:
```
Hello World!
```
Output:
```
khoor zruog!
```

## Problem 2: Transform Array by Digit Frequency
Let A = {a1, a2, ..., a_n} be an array of integers. The size of the array (n) and the elements of the array are read from SI. Write a program that will transform the array so that each element of the original array is replaced with the number of appearances of its least significant digit (the rightmost digit) in the number itself. Print the resulting array on the standard output.

Compute the count of a given digit in a number using a separate recursive function.

**Example:**

Input:
```
5
1 11 1121 111222112 22222
```
Output:
```
1 2 3 4 5
```

## Problem 3: Find Number with Digit Frequency on Even Positions
Write a program that will read an unknown number of triples (a, b, c), where each triple consists of three integers. For each triple, print the number (a or b) that contains the digit c more times in even positions. Positions are counted from right to left, with the first position being 1.

**Example:**

Input:
```
5436666 542456 6
1232432 3435 2
```
Output:
```
5436666
1232432
```

## Problem 4: Matrix Zero-to-One Transformation
Read from standard input the dimensions of a matrix (m < 100 and n < 100) which contains only zeros and ones. Then read the elements of the matrix.

Read the coordinates of one element of the matrix. If the element at the given position is 0, then it should become 1 and:

- All zeros above that element up to the first element with value 1 or to the start of the column.
- All zeros below that element up to the first element with value 1 or to the end of the column.
- All zeros left from that element up to the first element with value 1 or to the beginning of the row.
- All zeros right from that element up to the first element with value 1 or to the end of the row.

If the element of the given position is 1, the matrix remains unchanged.

Print the changed matrix.

**Example:**

Input:
```
7 6
1 1 1 1 1 1
0 0 0 0 1 0
1 0 0 0 1 1
1 1 0 1 0 0
0 1 1 0 0 0
0 1 0 0 0 0
1 1 0 0 0 0
5 5
```
Output:
```
1 1 1 1 1 1
0 0 0 0 1 0
1 0 0 0 1 1
1 1 0 1 0 1
0 1 1 0 0 1
0 1 1 1 1 1
1 1 0 0 0 1
```

## Problem 5: Count Odd Numbers in Array
Write a recursive function that will find the number of odd numbers in an array of integers. The function accepts the array and the total number of elements in the array as arguments. Use the following prototype:

```c
int Odd(int a[], int n);
```

Also, write the `main()` function to test the `Odd` function.

**Example:**

Input:
```
25
-1 -2 -5 5 7 -7 5 100 -6 -2 6 -6 -2 -9 -110 -24 -55 2 4 6 8 10 17 24 -25
```
Output:
```
10
```

## Problem 6: Find Parity Complements
For one integer `b`, we say that it is a parity complement of another integer `a` if and only if:

- All even digits of `a` are replaced with the corresponding (odd) digit increased by 1.
- All odd digits of `a` are replaced with the corresponding (odd) digit decreased by 1.

**Example:**

Number `b = 4013698` is a parity complement of `a = 5102789`.

**Task:**
Read an unknown number of integers (not more than 100) from SI until a non-numeric input is encountered. For each integer, compute its parity complement using a separate recursive function `parcom(int a)`.

Your task is to print the 5 smallest parity complements, sorted in ascending order. If fewer than 5 numbers are entered, print all parity complements.

**Example:**

Input:
```
9641 69403 103007 6 11 181 20486
```
Output:
```
0 7 90 8750 12116
```

**Notes:**
- Use a recursive function `parcom(int a)` to compute the parity complement.
- Global variables are **forbidden**.
- Sort the results and print the smallest 5 parity complements.

## Problem 7: Array Transformation and Reordering
An array of integers is to be read from SI. First, the number `N` (N ≤ 100) is entered, followed by `N` integers. Write a program that will transform the array as follows:

1. Starting at the beginning of the array, for each element that is equal to the next element in the array, double the value of the first one and overwrite the second one with `0`.
2. Rearrange the array so that all the zeroes are moved to the end of the array, keeping the order of the other elements.

Print all the elements of the array on the standard output in a single line, separated by space.

Write separate functions for transforming the array and for reordering the elements.

**Example:**

Input:
```
6
2 2 0 4 8 8
```

Intermediate transformation:
```
4 0 0 4 16 0
```

Output:
```
4 4 16 0 0 0
```

## Problem 8: Transform Square Matrix by Extremes
Read a square matrix of integers from standard input. First, the dimension `N` is entered (2 < N ≤ 100), followed by the elements of the matrix entered row by row.

Transform the matrix as follows:

1. All elements **above the main diagonal** are set to the value of the maximal element found above the main diagonal.
2. All elements **below the main diagonal** are set to the value of the minimal element found below the main diagonal.

Print the transformed matrix.

**Example:**

Input:
```
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

Output:
```
1 4 4 4
5 6 4 4
9 10 11 4
-7 -7 -7 16
```

## Problem 9: Transform Square Binary Matrix
Read a square binary matrix from standard input. First, the dimension `N` is entered (1 < N ≤ 100), followed by the elements of the matrix (either `0` or `1`) entered row by row.

Write a program that calculates the smallest number of changes needed to transform the matrix into a zero-diagonal symmetrical matrix. Each change (from `0` to `1` or from `1` to `0`) counts as a single transition. After the conversion:

1. All elements on the main diagonal must be `0`.
2. The matrix must be symmetrical with respect to the main diagonal.

Print the minimal number of transitions required.

**Example:**

Input:
```
4
1 0 0 1
1 1 1 1
0 1 1 1
0 0 0 0
```

Output:
```
7
```

**Explanation:**
The number of changes is `7`, as the matrix after the transitions could be transformed to:
```
0 0 0 1
0 0 1 1
0 1 0 1
1 1 1 0
```
**Optional**: for bonus points solve it without any use of if or ternary operator.

## Problem 10: Transform Text to Words
From SI read lines of text, none of which is longer than 80 characters. Write a program that will transform the input and print it out on the standard output. The output should contain only letters (all other characters are discarded), and each word should be printed in a separate line.

**Example:**

Input file:
```
 Voi5 ovaa 6d6ato$$tek!a ke
ostanat09856 4453 sa5m2o
bu!!4kv(((((i
```

Output:
```
Vo
ovaa
datoteka
ke
ostanat
samo
bukvi
```

## Problem 11: Hexadecimal Words
Read words from SI. No words are longer than 20 characters. Write a program that will print on the SO all the words from the input that are unsigned hexadecimal numbers (one word per line in uppercase letters). At the end, also print the total number of such numbers found in the input.

Hexadecimal numbers can contain both upper and lowercase letters `a-f` and `A-F`, but when printing them, convert them all to uppercase. Leading zeroes are treated as part of the number and should also be printed. Since the numbers are unsigned whole numbers, no sign or decimal point is considered part of the number.

**Example:**

Input:
```
The_sum_is
64
and_the_minimum_is
def
ined_as
a
035
where_signs_like
+12AB
are_not_considered
as_well_as
decimal_point_like
12.f5a
also_not
this1
or
2one
```

Output:
```
64
DEF
A
035
Total: 4
```

## Problem 12: Repeat Vowels K Times
Read an integer `k` from SI, followed by lines of characters. Write a program that transforms each line so that all vowels in the line are repeated `k` times. Print the transformed lines on SO.

**Example:**

Input:
```
3
This is a test.
Repeat vowels please.
```

Output:
```
Thiiis iiis aaa teeeest.
Reeepaaat voooweels pleeeaaaseee.
```

## Problem 13: Find Row with Largest Digit-to-Letter Ratio
Read lines from SI. Write a program to find and print the row where the ratio of digits to letters is the largest. If there is more than one such row, print the last one. Rows without any letters are ignored. No row is longer than 100 characters.

**Example:**

Input:
```
aaa123aa 222aa5a289
aaaa cde 23aaaa
45 ,, 56! 7
222aa5a289 aaa123aa 
123 aaa 89994 ghj 90 xyz
xyz ,. hgfd
```

Output:
```
222aa5a289 aaa123aa
```

## Problem 14: Transform Square Matrix Diagonals
From SI, read the dimension and elements of a square matrix (maximum size 100x100) of integers.

Create a new matrix where:

1. Each element of the **main diagonal** is replaced with the sum of all elements from the same row to the right of the element and elements from the same column above the element.

2. Each element of the **antidiagonal** is replaced with the sum of all elements from the same row to the left of the element and elements from the same column below the element.

3. If an element belongs to both diagonals, both sums are combined.

4. If there are no applicable elements, the value is set to `0`.

**Visualization:**
- Blue-red elements are part of the main diagonal.
- Blue elements are part of the antidiagonal.
- The purple element belongs to both diagonals.

**Example:**

Input:
```
3
1 2 3
4 5 6
7 8 9
```

Output:
```
5 2 18
4 20 6
0 8 9
```

## Problem 15: Find Strong Numbers in Array
Write a program that will read from SI an array of natural numbers (not more than 100). Print all the elements of the array that represent strong numbers (each on a new line). A number is considered strong if the sum of factorials of each of its digits is equal to the number itself.

**Example:**

The number `145` is strong because:
```
145 = 1! + 4! + 5!
```

**Implementation:**
- Check if a number is strong using a separate function.
- Use a separate recursive function to compute the factorial of a digit.

**Example Input:**
```
10 145 2 40585 3
```

**Example Output:**
```
145
2
40585
3
```

## Problem 16: Transform Array with Recursive Max Function
Read an array of `N` integers from standard input (first read the number `N`, then the elements). Call a recursive function on the array to transform it as follows:

- `a[0] = a[N-1] = max(a[0], a[N-1])`
- `a[1] = a[N-2] = max(a[1], a[N-2])`
- ...

Here, `max` is a function that returns the maximum of the two numbers. The recursive function should return the number of switched elements. Then, print that number and the transformed array.

**Example Input:**
```
5
4 5 6 7 8
```

**Example Output:**
```
2
8 7 6 7 8
```

## Problem 17: Recursive Triangle Function
Write a fully recursive function `triangle(n)` that, given the input argument `n`, prints a triangle of numbers from 1 to `n`. Additional helper functions can be used, but no loops should be used.

**Example for n = 4:**
```
1
12
123
1234
```

## Problem 18: Find Maximum Abbreviated Number
N positive integers are entered from the standard input and stored in an array `a` (N < 100). Additionally, a single-digit integer `k` is entered. Write a function to find the maximum of the abbreviated numbers of the elements in the array `a`, and call that function in the `main()` function.

A given element of the array is abbreviated as follows: all digits smaller than or equal to `k` are deleted from the number.

**Example:**

If `k = 3` and the input array is:
- `a[0] = 12345`, abbreviated `a[0]` becomes `45`.
- `a[1] = 458763`, abbreviated `a[1]` becomes `45876`.
- `a[2] = 112`, abbreviated `a[2]` becomes `0`.

The maximum abbreviated number is `45876`.

## Problem 19: Filter Numbers by Digit Criteria
N positive integers are entered from the standard input and stored in an array (N < 100). All elements that meet the following criteria should be printed on the standard output in the same order they appeared in the input. If no such numbers exist, print "No such elements!".

### Criteria:
- The most significant digit (the digit in the first position) is odd.
- The least significant digit (the digit in the last position) is even.

### Additional Requirements:
- The implementation of the criteria check should be performed in a separate function.
- For an additional 5 points, implement the criteria check as a recursive function.

**Example Input:**
```
10
12345
2345
345678
2912301
3212342
9129321
77777
213312
32322
313138
```

**Example Output:**
```
345678
3212342
32322
313138
```

## Problem 20: Transform Square Matrix with Neighborhood Rules
Read the dimension `N` (maximum value of 100) and the values (possible values are only `1` and `0`) of a square matrix $A_{NxN}$ from the standard input. Create a new matrix $B_{NxN}$ as follows:

For each element in `B`, write the value of the corresponding element from `A`. During this procedure, if in the neighborhood of an element in `A` (neighbors are the elements above, below, left, or right of it), there are at least 3 elements with a value of `1`, then that element in matrix `B` gets a value of `1` (even if the corresponding value in `A` was `0`).

Print the newly obtained matrix `B`.

**Example:**

Matrix `A`:
```
1 0 0 1 0
1 1 0 1 0
1 1 1 1 1
0 1 0 0 1
1 0 1 1 0
```

Matrix `B`:
```
1 0 0 1 0
1 1 1 1 0
1 1 1 1 1
1 1 1 1 1
1 1 1 1 0
```

## Problem 21: Extract Unique Elements from Matrix Rows
Firstly, read the dimensions of a matrix (`m`, `n` ≤ 100) from the standard input, followed by the elements of the matrix. Generate an array (with at most `m × n` elements) containing the elements of each row that appear exactly once in that row. The order of the elements in the array corresponds to the order of the rows and the order of the elements within each row. 

If the newly generated array has no elements, print `N`. Otherwise, print the elements of the array.

**Example:**

Input:
```
3 6
1 2 2 3 4 5
1 1 2 2 3 3
1 2 3 4 5 6
```

Output:
```
1 3 4 5 1 2 3 4 5 6
```

## Problem 22: Find Column with Smallest Sum
Read the dimensions `M` and `N` (not bigger than 100) and the values (whole numbers) of a matrix $A_{MxN}$ from the standard input. Print the index of the first column that has the smallest sum of all its elements.

**Example:**

Input:
```
3 8
1 2 3 5 7 11 13 17
19 23 29 31 37 41 43 47
53 59 61 67 71 73 79 83
```

Output:
```
0
```

## Problem 23: Transform Lines with Letters and Numbers
Write a program that reads lines no longer than 80 characters from the standard input. Each line consists of digits and letters.

The program should print on the standard output each line transformed such that the letters are concatenated next to each other, followed by the sum of all numbers that appear in the row. Numbers can have more than one digit. If there are no numbers, print `0` at the end of the line.

**Example:**

Input:
```
y2d3vbqiiK064waaa    
ksdjdjgdjgHH
```

Output:
```
ydvbqiiKwaaa69 
ksdjdjgdjgHH0
```

## Problem 24: Palindrome Words by Vowels
Write a program that will read from SI words (each in a separate row) no longer than 30 letters. Find all the words that define a palindrome only with the vowels they contain (i.e., after reversing the word, the vowels remain in the same relative positions). Print these words on the standard output. The appearance of uppercase and lowercase letters should be ignored.

**Example:**

Input:
```
Hellen 
input
werAnifameb
```

Output:
```
Hellen
werAnifameb
```

## Problem 25: Rectangle from Most Frequent Numbers
An integer `N` is read from SI, followed by an array of `N` one-digit integers.

Find the numbers `A` and `B` that repeat the most times in the array. Then print a rectangle with dimensions `A × B` on the standard output in the following format:

```
**.....*
**.....*
**.....*
**.....*
**.....*
```

Where:
- `A` is the smaller of the two numbers found.
- The rectangle consists of `A` lines with `B` stars per line.

In the test cases, there are always exactly two numbers that appear the same most times.

**Example:**

Input:
```
10
2 5 3 7 5 3 3 6 4 5
```

(3 appears 3 times, 5 appears 3 times, while the others are less frequent)

Output:
```
* * * * *
* * * * *
* * * * *
```

## Problem 26: Lines with Upper/Lower Case Ratio
Write a program that will read lines from SI and print on the SO the lines preceded by the ratio of uppercase to lowercase letters in the rows. At the end, print the number of the line with the largest ratio of uppercase to lowercase letters.

**Example Input:**
```
So, so you think you can tell Heaven from Hell,
blue skies From Pain.
Can you tell a Green Field From a cold steel rail?
A smile from a veil?
Do you think you can tell?
And did they geT you to Trade Your heroes for ghosts? 
Hot ashes for trees?
```

**Example Output:**
```
0.09 So, so you think you can tell Heaven from Hell,
0.13 blue skies From Pain.
0.11 Can you tell a Green Field From a cold steel rail?
0.07 A smile from a veil?
0.05 Do you think you can tell?
0.11 And did they geT you to Trade Your heroes for ghosts? 
0.07 Hot ashes for trees?
1
```
