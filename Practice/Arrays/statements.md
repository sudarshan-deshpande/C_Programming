# 📘 Problem 1: Input and Display Array Elements

## 🧠 Problem Statement

Write a C program to:

1. Accept `n` elements from the user  
2. Store them in an array  
3. Display all elements in the same order

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Print the array elements exactly in input order

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Array elements are: 10 20 30 40 50

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array declaration
- Taking input using loop
- Printing output using loop
- Indexing (`arr[i]`)
- Basic validation

---

# 📘 Problem 2: Sum of Array Elements

## 🧠 Problem Statement

Write a C program to calculate the **sum of all elements in an array**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store the values in an integer array

- Calculate the sum of all elements using a loop

- Display the final sum

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Sum = 150

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array traversal
- Accumulator variable (`sum`)
- Loop-based addition
- Input validation
- Clean output formatting

---
# 📘 Problem 3: Average of Array Elements

## 🧠 Problem Statement

Write a C program to calculate the **average of all elements in an array**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store the values in an integer array

- Calculate:
  - Sum of all elements
  - Average of elements

- Display average up to **2 decimal places**

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Average = 30.00

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Reuse sum logic
- Integer vs floating-point division
- Typecasting in C
- Output formatting using `%.2f`

---
# 📘 Problem 4: Find Largest Element in Array

## 🧠 Problem Statement

Write a C program to find the **largest element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find the maximum value using a loop

- Display the largest element

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 25 7 89 34

### Output

Largest element = 89

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Comparison logic using `if`
- Tracking maximum value
- Array traversal
- Initialization strategy

---
# 📘 Problem 5: Find Smallest Element in Array

## 🧠 Problem Statement

Write a C program to find the **smallest element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find the minimum value using a loop

- Display the smallest element

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 10 25 7 89 34

### Output

Smallest element = 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Comparison logic using `if`
- Tracking minimum value
- Array traversal
- Initialization strategy


---

## 🧠 Hint

Initialize minimum using the **first element** of the array, not `0`.

---

# 📘 Problem 6: Find Maximum and Minimum in Array

## 🧠 Problem Statement

Write a C program to find both the **largest** and **smallest** elements in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store all values in an integer array

- Find:
  - Largest element
  - Smallest element

- Display both values

---

## 📌 Example

### Input

Enter number of elements: 5  
Enter elements: 12 45 7 89 23

### Output

Largest element = 89  
Smallest element = 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Tracking two variables simultaneously
- Array traversal
- Comparison logic
- Efficient one-pass solution

---


## 🧠 Hint

Initialize both maximum and minimum using the **first element**.

---
# 📘 Problem 7: Search Element in Array (Linear Search)

## 🧠 Problem Statement

Write a C program to search for a given element in an array using **Linear Search**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array
  - Element to search

- Store values in an integer array

- Search the array from left to right

- If element is found, display its **position** (1-based index)

- If element appears multiple times, display the **first occurrence**

- If not found, print an appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50  
Enter element to search: 30

### Output

Element found at position 3

---

## 📌 Example 2

### Input

Enter number of elements: 5  
Enter elements: 7 9 2 9 1  
Enter element to search: 9

### Output

Element found at position 2

---

## 📌 Example 3

### Input

Enter number of elements: 4  
Enter elements: 5 8 1 6  
Enter element to search: 10

### Output

Element not found

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array traversal with condition checking
- Searching logic
- Early termination using `break`
- Position vs index understanding

---

## 🧠 Hint

Use a flag variable **or** store found position.

---


# 📘 Problem 8: Count Even and Odd Elements in Array

## 🧠 Problem Statement

Write a C program to count how many **even** and **odd** elements are present in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Traverse the array and count:
  - Total even elements
  - Total odd elements

- Display both counts

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 21 30 47 50

### Output

Even elements = 3  
Odd elements = 2

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 7 9 11 13

### Output

Even elements = 0  
Odd elements = 4

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Modulus operator `%`
- Conditional counting
- Array traversal
- Multiple counters in one loop

---
# 📘 Problem 9: Reverse Print Array Elements

## 🧠 Problem Statement

Write a C program to display the elements of an array in **reverse order**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Print all array elements starting from the last element to the first element

- Do **not** modify the original array

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Reverse order: 50 40 30 20 10

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 7 9 1 6

### Output

Reverse order: 6 1 9 7

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Reverse traversal
- Understanding indexes
- Array access without modifying data
- Loop control using decrement

---

## 🧠 Hint

Start loop from:

---

# 📘 Problem 10: Copy One Array into Another

## 🧠 Problem Statement

Write a C program to copy all elements of one array into another array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the first array

- Store values in an integer array

- Create a second array of same size

- Copy all elements from first array to second array using a loop

- Display the copied array elements

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Copied array: 10 20 30 40 50

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 7 9 1 6

### Output

Copied array: 7 9 1 6

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Using two arrays
- Element-wise copying
- Parallel indexing
- Traversal logic

---
# 📘 Problem 11: Find Second Largest Element in Array

## 🧠 Problem Statement

Write a C program to find the **second largest distinct element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Find:
  - Largest element
  - Second largest **distinct** element

- Display the second largest element

- If second largest does not exist, print an appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 10 20 30 40 50

### Output

Second largest element = 40

---

## 📌 Example 2

### Input

Enter number of elements: 5  
Enter elements: 9 9 9 9 9

### Output

Second largest element not found

---

## 📌 Example 3

### Input

Enter number of elements: 6  
Enter elements: 10 50 50 30 20 40

### Output

Second largest element = 40

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Tracking multiple values
- Distinct value handling
- Conditional logic refinement
- One-pass scanning strategy

---

## 💀 God Level Rules

- Do not sort the array
- Solve using traversal logic
- Second largest must be different from largest
- Handle duplicates correctly

---

# 📘 Problem 12: Find Third Largest Distinct Element in Array

## 🧠 Problem Statement

Write a C program to find the **third largest distinct element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Find:
  - Largest element
  - Second largest distinct element
  - Third largest distinct element

- Display the third largest element

- If third largest does not exist, print an appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 6  
Enter elements: 10 20 30 40 50 60

### Output

Third largest element = 40

---

## 📌 Example 2

### Input

Enter number of elements: 6  
Enter elements: 10 50 50 30 20 40

### Output

Third largest element = 30

---

## 📌 Example 3

### Input

Enter number of elements: 5  
Enter elements: 9 9 9 9 9

### Output

Third largest element not found

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Tracking three values simultaneously
- Distinct element handling
- Multi-branch conditional logic
- State management using flags

---

## 💀 God Level Rules

- Do not sort the array
- Solve using traversal logic
- Values must be distinct
- Handle duplicates correctly

---

# 📘 Problem 13: Find Frequency of Each Element in Array

## 🧠 Problem Statement

Write a C program to find and display the **frequency of each distinct element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Count how many times each distinct element appears

- Display each element with its frequency

- Repeated elements should be reported only once

---

## 📌 Example 1

### Input

Enter number of elements: 6  
Enter elements: 10 20 10 30 20 10

### Output

10 occurs 3 times  
20 occurs 2 times  
30 occurs 1 time

---

## 📌 Example 2

### Input

Enter number of elements: 5  
Enter elements: 7 7 7 7 7

### Output

7 occurs 5 times

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Nested loops
- Counting logic
- Duplicate skipping
- Frequency analysis

---

## 💀 God Level Rules

- Do not sort the array
- Display each distinct value only once
- Use traversal logic
- Keep output readable

---
# 📘 Problem 14: Find First Non-Repeating Element in Array

## 🧠 Problem Statement

Write a C program to find the **first non-repeating element** in an array.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Store values in an integer array

- Find the first element whose frequency is exactly `1`

- Display that element

- If no such element exists, print an appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 6  
Enter elements: 10 20 10 30 20 40

### Output

First non-repeating element = 30

---

## 📌 Example 2

### Input

Enter number of elements: 5  
Enter elements: 7 7 9 9 11

### Output

First non-repeating element = 11

---

## 📌 Example 3

### Input

Enter number of elements: 4  
Enter elements: 5 5 8 8

### Output

No non-repeating element found

---

## ⚙️ Constraints

- `1 <= n <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Frequency checking
- Nested loops
- Early break on first valid match
- Logical scanning order

---

## 💀 God Level Rules

- Do not sort the array
- Preserve original order
- First means first by appearance
- Stop once answer is found

---

# 📘 Problem 15: Find Intersection of Two Arrays (Unique Elements Only)

## 🧠 Problem Statement

Write a C program to find the **intersection of two arrays**, i.e., elements that are common in both arrays.

- Each common element should be printed **only once**
- Order of appearance should follow the **first array**

---

## 🎯 Requirements

- Ask the user to enter:
  - Size of first array (`n`)
  - Elements of first array
  - Size of second array (`m`)
  - Elements of second array

- Find elements that appear in **both arrays**

- Print each common element **only once**

- If no common elements exist, print an appropriate message

---

## 📌 Example 1

### Input

Enter size of first array: 5  
Enter elements: 1 2 3 4 5  

Enter size of second array: 4  
Enter elements: 3 4 5 6  

### Output

Intersection elements: 3 4 5

---

## 📌 Example 2

### Input

Enter size of first array: 5  
Enter elements: 1 2 2 3 4  

Enter size of second array: 5  
Enter elements: 2 2 4 4 6  

### Output

Intersection elements: 2 4

---

## 📌 Example 3

### Input

Enter size of first array: 3  
Enter elements: 1 2 3  

Enter size of second array: 3  
Enter elements: 4 5 6  

### Output

No common elements found

---

## ⚙️ Constraints

- `1 <= n, m <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Working with two arrays
- Nested loops comparison
- Duplicate elimination
- Conditional filtering

---

## 💀 God Level Rules

- Do not sort arrays
- Do not use extra data structures
- Preserve order of first array
- Print only unique intersection elements

---
# 📘 Problem 16: Find Union of Two Arrays (Unique Elements Only)

## 🧠 Problem Statement

Write a C program to find the **union of two arrays**, i.e., all distinct elements from both arrays.

- Each element should appear **only once**
- Order should follow:
  - First array elements (in order)
  - Then remaining elements from second array

---

## 🎯 Requirements

- Ask the user to enter:
  - Size of first array (`n`)
  - Elements of first array
  - Size of second array (`m`)
  - Elements of second array

- Combine both arrays into a union of **unique elements**

- Print all unique elements

- If arrays are valid, always print union

---

## 📌 Example 1

### Input

Enter size of first array: 4  
Enter elements: 1 2 3 4  

Enter size of second array: 4  
Enter elements: 3 4 5 6  

### Output

Union elements: 1 2 3 4 5 6

---

## 📌 Example 2

### Input

Enter size of first array: 5  
Enter elements: 1 2 2 3 4  

Enter size of second array: 5  
Enter elements: 2 2 4 4 6  

### Output

Union elements: 1 2 3 4 6

---

## 📌 Example 3

### Input

Enter size of first array: 3  
Enter elements: 7 8 9  

Enter size of second array: 3  
Enter elements: 7 8 9  

### Output

Union elements: 7 8 9

---

## ⚙️ Constraints

- `1 <= n, m <= 100`

If user enters invalid size, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Two-array traversal
- Duplicate elimination
- Order preservation
- Conditional filtering

---

# 📘 Problem 17: Left Rotate Array by K Positions

## 🧠 Problem Statement

Write a C program to **left rotate an array by `k` positions**.

- After rotation, elements shift to the left
- Elements that go out from the front should come back at the end

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array
  - Number of positions to rotate (`k`)

- Perform **left rotation**

- Display the rotated array

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter k: 2  

### Output

Rotated array: 3 4 5 1 2

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 10 20 30 40  
Enter k: 1  

### Output

Rotated array: 20 30 40 10

---

## 📌 Example 3

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter k: 7  

### Output

Rotated array: 3 4 5 1 2

---

## ⚙️ Constraints

- `1 <= n <= 100`
- `k >= 0`

If input is invalid, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Array rotation logic
- Modulo operation (`k % n`)
- Index shifting
- Temporary storage usage

---

## 💀 God Level Rules

- Do not use extra arrays for final solution (try in-place)
- Handle `k > n` properly
- Maintain order of rotated elements

---

## 🧠 Hint

- First reduce `k` using:  
  `k = k % n`

- Two approaches:
  1. Shift one-by-one (simple but less efficient)
  2. Reverse parts of array (advanced)

---
# 📘 Problem 18: Right Rotate Array by K Positions

## 🧠 Problem Statement

Write a C program to **right rotate an array by `k` positions**.

- Elements shift to the right
- Elements that go out from the end should come back at the beginning

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array
  - Number of positions to rotate (`k`)

- Perform **right rotation**

- Display the rotated array

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter k: 2  

### Output

Rotated array: 4 5 1 2 3

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 10 20 30 40  
Enter k: 1  

### Output

Rotated array: 40 10 20 30

---

## 📌 Example 3

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter k: 7  

### Output

Rotated array: 4 5 1 2 3

---

## ⚙️ Constraints

- `1 <= n <= 100`
- `k >= 0`

If input is invalid, print:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Reverse logic application
- Understanding rotation symmetry
- Index manipulation

---

## 💀 God Level Rules

- Do not use extra arrays
- Must handle `k > n`
- Maintain correct order

---
# 📘 Problem 19: Rotate Array Left by 1 Position (In-Place, Multiple Times)

## 🧠 Problem Statement

Write a C program to **rotate an array to the left by 1 position**, and repeat this operation `k` times.

- Each rotation shifts elements left by 1
- First element moves to the end

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array
  - Number of rotations (`k`)

- Perform **left rotation one-by-one, k times**

- Display the final array

---

## 📌 Example 1

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5  
Enter k: 2  

### Output

Rotated array: 3 4 5 1 2

---

## 📌 Example 2

### Input

Enter number of elements: 4  
Enter elements: 10 20 30 40  
Enter k: 3  

### Output

Rotated array: 40 10 20 30

---

## ⚙️ Constraints

- `1 <= n <= 100`
- `k >= 0`

---

# 📘 Problem 21: Rotate Array Left by 1 Position (Single Rotation)

## 🧠 Problem Statement

Write a C program to rotate an array to the left by **1 position only**.

- First element should move to the end
- All other elements shift left by one index

---

## 🎯 Example

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5

### Output

Rotated array: 2 3 4 5 1

---

# 📘 Problem 22: Rotate Array Right by 1 Position (Single Rotation)

## 🧠 Problem Statement

Write a C program to rotate an array to the right by **1 position only**.

- Last element should move to the beginning
- All other elements shift right by one index

---

## 🎯 Example

### Input

Enter number of elements: 5  
Enter elements: 1 2 3 4 5

### Output

Rotated array: 5 1 2 3 4

---

# 📘 Problem 23: Check if One Array is Rotation of Another

## 🧠 Problem Statement

Write a C program to check whether one array is a **rotation** of another array.

Two arrays are considered rotations if one can be obtained by rotating the other.

---

## 🎯 Requirements

- Ask the user to enter:
  - Size of arrays (`n`)
  - Elements of first array
  - Elements of second array

- Check whether second array is a rotation of first array

- Print appropriate message

---

## 📌 Example 1

### Input

Enter number of elements: 5

Enter elements of first array:  
1 2 3 4 5

Enter elements of second array:  
3 4 5 1 2

### Output

Second array is a rotation of first array

---

## 📌 Example 2

### Input

Enter number of elements: 5

Enter elements of first array:  
1 2 3 4 5

Enter elements of second array:  
4 3 5 1 2

### Output

Second array is NOT a rotation of first array

---

## 📌 Example 3

### Input

Enter number of elements: 4

Enter elements of first array:  
10 20 30 40

Enter elements of second array:  
10 20 30 40

### Output

Second array is a rotation of first array

---

## ⚙️ Constraints

- `1 <= n <= 100`

If invalid input:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Circular traversal thinking
- Rotation pattern understanding
- Nested loop matching
- Index wrapping

---

## 💀 God Level Rules

- Do NOT sort arrays
- Do NOT use strings
- Think circularly
- Try solving without extra arrays

---

## 🧠 Hint

If arrays are rotations:


A = 1 2 3 4 5
B = 3 4 5 1 2

---

# 📘 Problem 24: Find Longest Increasing Continuous Subarray

## 🧠 Problem Statement

Write a C program to find the **length of the longest continuous increasing subarray**.

A continuous increasing subarray means:

Arr[i] < Arr[i + 1]

for consecutive elements.

You only need to print the **maximum length**.

---

## 🎯 Requirements

- Ask the user to enter:
  - Number of elements (`n`)
  - Elements of the array

- Find the longest continuous increasing sequence

- Print its length

---

## 📌 Example 1

### Input

Enter number of elements: 8  
Enter elements: 1 2 3 1 2 3 4 0

### Output

Longest increasing continuous subarray length = 4

---

## 📌 Example 2

### Input

Enter number of elements: 6  
Enter elements: 5 6 7 8 9 10

### Output

Longest increasing continuous subarray length = 6

---

## 📌 Example 3

### Input

Enter number of elements: 5  
Enter elements: 9 8 7 6 5

### Output

Longest increasing continuous subarray length = 1

---

## ⚙️ Constraints

- `1 <= n <= 100`

If invalid input:

Invalid input

---

## 🎓 Expected Learning Outcomes

- Sequential pattern analysis
- Maintaining running count
- Maximum tracking logic
- Array traversal mastery

---

## 💀 God Level Rules

- Do NOT sort the array
- Do NOT use extra arrays
- Solve using single traversal after input
- Target Time Complexity: `O(n)`

---

## 🧠 Hint

Maintain two variables:

current_length  
max_length

If current element is greater than previous:

current_length++;

Else:

current_length = 1;

Update maximum carefully.

---