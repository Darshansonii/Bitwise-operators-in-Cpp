# Experiment-4


Aim  
* To create a C++ program that demonstrates the basic use of bitwise operators.  
* To set and reset a specific bit in a given number using bitwise operations.

Apparatus  
* Computer System (Laptop/Desktop)  
* Standard Keyboard and Mouse  
* Power Supply

Software Used  
* Visual Studio Code  
* GCC/G++ Compiler  
* Terminal or Command Prompt

Theory  
* Bitwise operators in C++ perform operations directly on the binary representations of integers.  
* Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), Left Shift (<<), and Right Shift (>>).  
* These operators are useful for low-level programming, performance optimization, and systems-level tasks.  
* Setting a bit means turning a specific bit position to 1 without affecting other bits.  
* Resetting a bit means turning a specific bit position to 0 while keeping other bits unchanged.  
* To set the `n`th bit: use the expression `number | (1 << n)`.  
* To reset the `n`th bit: use the expression `number & ~(1 << n)`.  
* Bitwise operations are very fast and often used in embedded systems, cryptography, networking, and graphics.  
* They help reduce memory usage by packing data efficiently using flags and bit fields.  
* Understanding these operations enhances control over hardware-level data manipulation.  
* These concepts are foundational for developing drivers, compilers, and performance-critical algorithms.  
* Bitwise tricks are commonly asked in coding interviews and competitive programming.

Program Features  
* Accepts an integer input from the user.  
* Demonstrates how various bitwise operators modify the number.  
* Allows the user to select a bit position to set or reset.  
* Displays the updated binary and decimal result after each operation.  
* Includes clear logic and step-by-step output for learning and verification.

Conclusion  
* The program was compiled and executed successfully using Visual Studio Code and GCC.  
* It demonstrated clear use of bitwise operators for manipulating binary data.  
* The operations to set and reset bits were performed using optimized expressions.  
* This practical helped reinforce low-level data handling skills and the power of bitwise logic in C++.
