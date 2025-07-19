# Experiment-4

1.Basic Use of Bitwise Operators in C++

This C++ program demonstrates the basic use of bitwise operators, which perform operations directly on the binary representations of integers.

Bitwise Operators Used:
& (AND)

| (OR)

^ (XOR)

~ (NOT)

<< (Left Shift)

>> (Right Shift)

What the Program Does:
Takes two integer inputs from the user

Applies each bitwise operator to the inputs

Displays the results in both decimal and binary forms

Educational Purpose:
This program helps beginners understand how bit-level operations work in C++, which is useful for low-level programming, embedded systems, and performance optimization.

2.Set and Reset a Specific Bit in C++

This C++ program allows the user to set (turn ON) or reset (turn OFF) a specific bit in an integer.

What the Program Does:

Takes an integer number and a bit position as input

Allows the user to choose:

Set a bit → Uses bitwise OR: number | (1 << position)

Reset a bit → Uses bitwise AND with NOT: number & ~(1 << position)

Displays the new number after the bit operation

Example:

Input number: 10   (Binary: 00001010)
Bit to set: 1      → Result: 10 (No change, already set)
Bit to reset: 3    → Result: 2  (Binary: 00000010)

Educational Purpose:

This program teaches:

How to manipulate individual bits

Use of bitwise shift (<<) and logical operations

Practical application in flags, masks, and hardware-level programming
