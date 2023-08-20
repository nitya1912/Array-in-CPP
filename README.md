# Array-in-CPP

# Code-8

# Title:
To prompts the user to input 10 numbers, stores them in an array, and then displays the entered numbers back to the user.

# Theory:
Arrays are used in C++ (and in many other programming languages) to store a collection of elements of the same data type in a contiguous block of memory.Some advantages of arrays are as follows: grouping, efficient Access, iteration, memory efficiency, algorithm implementation etc.

# Algorithm:
**Algorithm includes**: 1)Include necessary header files. ;2)Declare an integer array numbers. ;3)Output "Enter 10 numbers: ". ;4)Use a for loop to input 10 integers and store them in the numbers array. ;5)Output "The numbers are: ". ;6)Use a for loop to output the integers from the numbers array, each followed by two spaces. ;7)Return 0 to indicate successful program completion.

# Explanation of Code:
**Include Header Files**:Include the <iostream> header for input and output operations. ;**Namespace Declaration**:Use the using namespace std; declaration to avoid prefixing standard library elements with std::. ;**Main Function**:Define the main function where the program execution starts. ;**Array Declaration**:Declare an integer array numbers that can store up to 10 integers. ;**User Input Loop**:Output "Enter 10 numbers: " to prompt the user.Use a for loop to iterate from 0 to 9 (10 times):
Read an integer from the user using cin.Store the entered integer in the corresponding index of the numbers array. ;**Output Loop**:Output "The numbers are: ".Use another for loop to iterate from 0 to 9 (10 times):
Output the integer stored in the current index of the numbers array, followed by two spaces. ;**End of Main Function**:Return 0 to indicate successful program execution.

**END OF CODE-8**
