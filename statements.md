# 📘 C Programming Problem Statements

---

## 🧠 Problem 1: Student record system

### 📌 Problem statement
Write a C program to manage student records using structures.

---

### 🎯 Requirements

1. Accept the number of students (N) from the user.

2. For each student, input the following details:
    - Name
    - Roll Number
    - Marks in 3 subjects

3. For every student, calculate:
    - Total marks
    - Average marks

4. Assign a grade based on average marks:
   - Grade A → Average ≥ 75  
   - Grade B → 60 ≤ Average < 75  
   - Grade C → 50 ≤ Average < 60  
   - Grade F → Average < 50  

5. Display the details of all students including:
   - Name  
   - Roll Number  
   - Total  
   - Average  
   - Grade  

6. Identify and display the student with the highest average marks (Topper).

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for calculations and display  
- Use loops for input and processing  

---
## 🧠 Problem 2: Search Student by Roll Number

### 📌 Problem Statement
Write a C program to manage student records using structures and search for a student using roll number.

---

### 🎯 Requirements

1. Accept the number of students (N) from the user.

2. For each student, input the following details:
   - Name  
   - Roll Number  
   - Marks in 3 subjects  

3. For every student, calculate:
   - Total marks  
   - Average marks  

4. Ask the user to enter a roll number to search.

5. Search for the student using the given roll number:
   - If found, display:
     - Name  
     - Roll Number  
     - Total  
     - Average  
   - If not found, display:
     - "Student not found"  

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for calculations and display  
- Use loop for searching  

---
## 🧠 Problem 3: Student Management System (Menu Driven)

### 📌 Problem Statement
Write a C program to manage student records using structures and a menu-driven approach.

---

### 🎯 Requirements

1. Accept the number of students (N).

2. For each student, input the following details:
   - Name  
   - Roll Number  
   - Marks in 3 subjects  

3. For every student, calculate:
   - Total marks  
   - Average marks  

---

### ⚙️ Menu Options

After input, repeatedly display the following menu:

1. Display All Students  
2. Search Student by Roll Number  
3. Find Topper  
4. Sort Students by Total Marks  
5. Exit  

---

### 🔍 Option 1: Display All
- Display details of all students  
- Use your existing `display()` function  

---

### 🔍 Option 2: Search
- Search student using roll number  
- If found, display student details  
- If not found, display "Student not found"  

---

### 🏆 Option 3: Find Topper
- Identify student with highest total marks  
- Display that student  

---

### 🔄 Option 4: Sort Students
- Sort students based on total marks (descending)  
- Use simple sorting (e.g., Bubble Sort)  
- Swap entire structures  

---

### 🚪 Option 5: Exit
- Terminate the program  

---

### ⚙️ Constraints / Requirements

- Use `struct` to store student data  
- Use array of structures  
- Use functions for:
  - calculate  
  - display  
  - search  
  - sorting  
- Use loop + `switch-case` for menu  

---

### 🧠 Important Concepts

- Infinite loop using `while(1)`  
- Menu handling using `switch-case`  
- Swapping entire structures  
- Reuse logic from previous problems  

---

### 🚀 Difficulty Level

🟡 Medium → 🔴 Approaching Advanced

---

# Problem 4: Sum and Average of Array Elements

## Problem Statement:
Write a C program to calculate the **sum and average of elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate:
  - Sum of all elements
  - Average of elements

- Display both results

---

## Example:

### Input:

Enter number of elements: 5
Enter elements: 10 20 30 40 50


### Output:

Sum = 150
Average = 30.00


---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Array traversal
- Accumulation using loops
- Typecasting for accurate average

# Problem 5: Find Largest Number in an Array

## Problem Statement:
Write a C program to find the **largest element in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find and display the **largest number** among them.

---

## Example:

### Input:

- Enter number of elements: 5
- Enter elements: 10 25 7 89 34

### Output:
- Largest number = 89

---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Array basics
- Loop usage
- Comparison logic (if condition)

# Problem 6: Find Second Largest Element in an Array

## Problem Statement:
Write a C program to find the **second largest element** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find and display the **second largest number**.

---

## Example:

### Input:

Enter number of elements: 5
Enter elements: 10 25 7 89 34


### Output:

Second largest number = 34


---

## Important Notes:
- The second largest element must be **different from the largest**
- If all elements are same or no second largest exists, print:

No second largest element


---

## Constraints:
- 1 ≤ n ≤ 100

---

## Expected Learning Outcomes:
- Advanced comparison logic
- Handling edge cases
- Multiple variable tracking (largest & second largest)

# Problem 7: Input and Display Array Elements

## Problem Statement:
Write a C program to:

1. Accept n elements from the user  
2. Store them in an array  
3. Display all elements  

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Display all elements in the same order

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Array elements are: 10 20 30 40 50  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Array input/output
- Loop usage
- Basic program structure

# Problem 8: Sum of Array Elements

## Problem Statement:
Write a C program to calculate the **sum of all elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate the sum of all elements
- Display the result

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Sum = 150  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Accumulation using loops
- Understanding variable initialization
- Building on array traversal

# Problem 9: Average of Array Elements

## Problem Statement:
Write a C program to calculate the **average of elements in an array**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Calculate the average of all elements
- Display the result up to 2 decimal places

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Average = 30.00  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Typecasting in C
- Integer vs float division
- Precision handling in output
# Problem 10: Find Maximum and Minimum in Array

## Problem Statement:
Write a C program to find the **maximum and minimum elements** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find:
  - Maximum element
  - Minimum element

- Display both values

---

## Example:

### Input:
Enter number of elements: 5  
Enter elements: 12 45 7 89 23  

### Output:
Maximum = 89  
Minimum = 7  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Array traversal  
- Comparison logic  
- Using variables to track max/min  
# Problem 11: Find Second Largest Element in Array

## Problem Statement:
Write a C program to find the **second largest element** in an array.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Find:
  - Second largest element

- If second largest does not exist (e.g., all elements are same), display:
  Second largest element not found

---

## Example 1:

### Input:
Enter number of elements: 5  
Enter elements: 10 20 30 40 50  

### Output:
Second Largest = 40  

---

## Example 2:

### Input:
Enter number of elements: 4  
Enter elements: 5 5 5 5  

### Output:
Second largest element not found  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Advanced array traversal  
- Handling edge cases  
- Tracking multiple values (largest & second largest)  
- Conditional logic refinement  
# Problem 12: Third Largest Element in Array (Using Functions)

## Problem Statement:
Write a C program to find the **third largest distinct element** in an array using **functions**.

---

## Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- Create a function:
  int thirdLargest(int arr[], int n);

- The function should:
  - Return the **third largest distinct element**
  - If the third largest element does not exist, return INT_MIN

---

## Important Conditions:

- Only **distinct elements** should be considered when finding largest values

- Example:
  Input: 10 20 20 30 40  
  Distinct elements: 10, 20, 30, 40  
  Third largest = 20  

- If the third largest element does not exist, display:
  Third largest element not found

---

## Example 1:

Input:  
Enter number of elements: 6  
Enter elements: 5 10 15 20 25 30  

Output:  
Third Largest = 20  

---

## Example 2:

Input:  
Enter number of elements: 4  
Enter elements: 7 7 7 7  

Output:  
Third largest element not found  

---

## Constraints:
- 1 ≤ n ≤ 100  

---

## Expected Learning Outcomes:
- Function usage in C  
- Passing arrays to functions  
- Advanced array traversal  
- Handling duplicates and edge cases  
- Tracking multiple variables (largest, second, third)  

---
## Problem 13: Count Frequency of Each Element in Array

### Problem Statement:
Write a C program to count the **frequency of each element** in an array.

---

### Requirements:

- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array

- For each element, display how many times it appears in the array

- Each element’s frequency should be printed **only once**

---

### Important Conditions:

- Do NOT print duplicate frequency entries

- Example:  
  Input: 10 20 10 30 20  
  Output:  
  10 occurs 2 times  
  20 occurs 2 times  
  30 occurs 1 time  

---

### Example 1:

Input:  
Enter number of elements: 5  
Enter elements: 1 2 2 3 1  

Output:  
1 occurs 2 times  
2 occurs 2 times  
3 occurs 1 time  

---

### Example 2:

Input:  
Enter number of elements: 4  
Enter elements: 7 7 7 7  

Output:  
7 occurs 4 times  

---

### Constraints:
- 1 ≤ n ≤ 100  

---

### Expected Learning Outcomes:
- Nested loops with arrays  
- Counting techniques  
- Avoiding duplicate processing  
- Basic frequency logic (foundation for hashing later)  
## Problem 14: Find the First Non-Repeating Element in Array

### Problem Statement:
Write a C program to find the **first non-repeating element** in an array.

---

### Requirements:
- Ask the user to enter:
  - Number of elements (n)
  - Elements of the array
- For the given array, identify and display the **first element that occurs only once**

---

### Important Conditions:
- Do NOT sort the array
- Traverse the array in order and print the **first element with frequency = 1**
- If all elements repeat, print an appropriate message

---

### Example:
Input: 4 5 1 2 0  
Output:  
4 is the first non-repeating element  

---

### Example 1:
Input: 1 2 2 3 1 4  
Output:  
3 is the first non-repeating element  

---

### Example 2:
Input: 7 7 7 7  
Output:  
No non-repeating element found  

---

### Constraints:
- 1 ≤ n ≤ 100  

---

### Expected Learning Outcomes:
- Nested loops with arrays  
- Counting logic reuse from previous problem  
- Avoiding unnecessary iterations  
- Understanding element uniqueness logic  

---

# 📘 Problem 15: Library Book Management System

## 🎯 Objective

Create a menu-driven C program using structures to manage books in a library.

The program should allow the user to:

- Add books
- Display books
- Search books
- Update price
- Issue/return books
- Sort books by price

This problem is designed to revise:

- Structures
- Nested structures
- Arrays of structures
- Pointer to structure
- String handling
- Searching
- Sorting
- Menu-driven programming

---

# 📦 Structures to Use

## 1️⃣ Date Structure

```c
struct Date
{
    int day;
    int month;
    int year;
};
```

---

## 2️⃣ Book Structure

```c
struct Book
{
    int id;
    char name[50];
    char author[50];
    float price;

    struct Date pubDate;

    int available; // 1 = Available, 0 = Issued
};
```

---

# 🔥 Functional Requirements

## MENU

```text
1. Add Book
2. Display All Books
3. Search Book by ID
4. Search Books by Author
5. Update Price
6. Issue Book
7. Return Book
8. Sort Books by Price
9. Exit
```

---

# ⚔️ Requirements

## ✅ Add Book

Take all details from the user:

- Book ID
- Book Name
- Author Name
- Price
- Publication Date

Book should be available by default.

---

## ✅ Display All Books

Display all books in proper table format.

Example:

```text
ID   Name        Author      Price    Status
101  C Basics    Dennis      450      Available
```

---

## ✅ Search Book by ID

User enters book ID.

Display complete details if found.

Otherwise print:

```text
Book Not Found
```

---

## ✅ Search Books by Author

User enters author name.

Display all books written by that author.

Use string handling functions.

---

## ✅ Update Price

Update price of a book using Book ID.

Use pointer to structure in this function.

---

## ✅ Issue Book

Change book status from Available to Issued.

---

## ✅ Return Book

Change book status from Issued to Available.

---

## ✅ Sort Books by Price

Sort all books in ascending order of price.

Manual sorting only.

Library sorting functions are not allowed.

---

# ⚠️ Constraints

- Maximum 100 books
- Use functions for every operation
- No global variables
- Use arrays of structures
- Use nested structures properly

---

# 🧠 Concepts Revised

- Structures
- Nested Structures
- Arrays of Structures
- Pointer to Structure
- Searching
- Sorting
- String Handling
- Menu Driven Programming

---

# 📘 Problem 16: Employee Salary Record Using Structure

## 🧠 Problem Statement

Write a C program using `struct` to store details of one employee.

The structure should contain:

- Employee ID
- Name
- Salary

Take input from the user and display the employee details.

---

# ⭐ Example

## Input

Enter Employee ID: 101  
Enter Name: Rahul  
Enter Salary: 45000

---

## Output

Employee Details:

ID: 101  
Name: Rahul  
Salary: 45000