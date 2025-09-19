# learning C++ :
Collection of C++ codes and small projects i made in my freshman year.

This repository contains the collections of beginner friendly projects i made while learning programming concepts.
The goal is to build a strong foundation by practicing small problems step by step. 

## 📂 Folder Structure

- **learning-c-/** → Programs that use custom functions
  -square_numbers.cpp → Calculates and prints squares of the numbers in a user defined range.
  ## 🚀 Program: square_numbers.cpp

  ### Description
This program demonstrates:
- Using a function to calculate squares of numbers
- Iterating over a range with a for-loop
- Basic input/output in C++

### Example Usage
Enter starting and ending numbers:
1 5

Output:
1 - 1
2 - 4
3 - 9
4 - 16
5 - 25

### Learning Objectives
- For Loops
- Functions
- Input/Output
- Variables and scope
- Problem-solving basics


## 🚀 Program: TriangleDeterminer.cpp
This is a simple C++ program that takes the lengths of three sides of a triangle as input and determines whether the triangle is:

- **Equilateral** – all three sides are equal  
- **Isosceles** – any two sides are equal  
- **Scalene** – all sides are different  

 📌 How It Works

The program uses basic `if-else` conditions to compare the sides and classify the triangle

🚀 Usage:
1. Compile the code:
   g++ triangle.cpp -o triangle

2.Run the executable:
 ./triangle

3.Enter three side lengths (float or int):
 5 5 8

4.Output:
 isosceles

💻 This is part of my daily practice to improve problem-solving and C++ skills.


## 🚀Factorial Calculator (C++)

This is a simple C++ program that calculates the factorial of a number using a do...while loop.

📜 Description

The program takes an integer input from the user and prints the factorial of that number.
It continues multiplying until it reaches 1, following the formula:
N! = N*N(N-1)*(N-2)*(N-3)...1

🛠️ Features

Uses do...while loop to demonstrate iterative logic.

Handles 0! correctly (prints 1).

Simple and beginner-friendly code.


## 🚀 Reverse Array in C++

This is a simple C++ program that reads an array of integers from the user and prints the elements in reverse order.

📖 How It Works

 1.Takes input N – the number of elements in the array.

 2.Reads N integers from the user.

 3.Prints the elements in reverse order, separated by spaces.

 🖥️ Example

   Input:
   5
   2 4 5 6 8

   Output:
   8 6 5 4 2




## 🚀 Comma-Separated Number Parser

A simple C++ program that reads a string of comma-separated numbers from standard input, parses them using `stringstream`, and prints each number on a new line.

 🚀 Features
- Takes input as a **single string** containing numbers separated by commas (e.g., `10,20,30`).
- Uses `vector<char>` to store characters before converting to a string.
- Utilizes `stringstream` to separate numbers from commas.
- Prints each number on its own line.

 📋 Example
### Input:
10,20,30,40

 Output:
10
20
30
40

 🛠️ How It Works
  1. **Store Input in `vector<char>`**  
   Reads the string character by character and stores it in a `vector<char>`.

  2. **Convert Vector to String**  
   Reconstructs a string from the `vector<char>` so that it can be processed by `stringstream`.

  3. **Parse Numbers with `stringstream`**  
   Extracts each integer from the string and consumes commas in between to prepare for the next number.

 🎯 Learning Highlights

   1.Working with vector<char>

   2.Converting vector<char> to std::string

   3.Parsing formatted input using stringstream

   4.Handling separators (commas) while extracting integers

 📂 Use Cases

  1.Parsing CSV-like data.

  2.Handling custom-formatted input in competitive programming.

  3.Learning and practicing stringstream in C++.

 🧠 Author's Note

   This program was built as part of a learning journey into C++ input parsing and data handling. It's a small but powerful example of how to handle custom input formats in a clean and efficient way.



## 🚀 Variable-Sized Arrays in C++

This project demonstrates how to work with dynamic 2D arrays in C++ using vector<vector<int>>.
It is based on the classic "Variable Sized Arrays" problem (HackerRank).


## 🚀 Problem Description

We are given:
n → number of arrays
q → number of queries
For each of the n arrays:
Read p (the size of the array).
Read p integers and store them.
Then for each of the q queries:
Read two integers row and col.
Print the element at matrix[row][col].


## 🖥️ Code Overview

Uses vector<vector<int>> to store a flexible number of arrays.
Dynamically resizes rows based on input.
Accesses elements using matrix[row][col].
Outputs the result for each query.



## 🧠 Key Learnings

How to use vector<vector<int>> for dynamic 2D arrays.

How to read variable-length arrays in C++.

How to access and print values based on queries.


## ✌️(More folders will be added as I learn new concepts)


## 🚀 How to Run

1. Clone this repository:
```bash
git clone https://github.com/SachX001/learning-c-

