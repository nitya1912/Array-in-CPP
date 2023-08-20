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


# Code-9

# Title: 
To demonstrates a simple program to search for a given number within an array. 

# Theory:
This C++ program prompts the user to input an array's size and its elements. It then asks for a number to search for. The program uses a loop to search through the array and outputs the index if the number is found. If the number is not found, it indicates that it's not present in the array. This illustrates a basic linear search algorithm to find an element in an array.

# Algorithm:
Algorithm includes: 1)Include necessary header files. ;2)Declare an integer array input and integer variables count, i, and num. ;3)Output prompt to enter the number of elements (count). ;4)Read user input for count. ;7)Output prompt to enter count numbers. ;8)Use a for loop to read count numbers and store them in the input array. ;9)Output prompt to enter the number to be searched (num). ;10)Read user input for num. ;11)Use a for loop to search for num in the input array: If found, output the index and break. ;12)If the loop completes without finding a match, output that the element was not found. ;13)Return 0 to indicate successful program completion.

# Explanation of Code:
**Include Header Files**:Include the <iostream> header for input and output operations. ;**Namespace Declaration**:Use the using namespace std; declaration to avoid prefixing standard library elements with std::. ;**Main Function**:Define the main function where the program execution starts. ;**Array and Variable Declarations**:Declare an integer array input capable of holding up to 100 elements.Declare integer variables count, i, and num. ;**User Input for Array Size**:Output "Enter Number of Elements in Array: ".Read the user's input for count. ;**User Input for Array Elements**:Output "Enter [count] numbers ".
Use a for loop to read count numbers from the user and store them in the input array. ;**User Input for Search Number**:
Output "Enter a number to search in Array: ".Read the user's input for num. ;**Search Loop**:Use a for loop to search for num within the input array.If num is found at index i, output "Element found at index: [i]" and break the loop. ;**Search Result Output**:If the loop completes without finding a match (if i reaches count), output "Element Not Present in Input Array". ;**End of Main Function**:Return 0 to indicate successful program execution.

**END OF CODE-9**
