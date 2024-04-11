# 0x14. C - Bit Manipulation

## Overview

This project focuses on understanding and utilizing bitwise operations in the C programming language. It covers various topics such as converting binary numbers, printing binary representations, setting, clearing, and flipping bits, and determining endianness.

## Resources

- [Operators in C - Part 6](https://www.tutorialspoint.com/cprogramming/c_operators.htm)
- [Operators in C - Part 7 (Bitwise Operators-II)](https://www.tutorialspoint.com/cprogramming/c_bitwise_operators.htm)
- [Bitwise Operators 1: The AND Operation](https://www.youtube.com/watch?v=bKYHz5Vv3AU)
- [Bitwise Operators 2: The OR Operation](https://www.youtube.com/watch?v=5n8xky5i6AA)
- [Bitwise Operators 3: The XOR Operation](https://www.youtube.com/watch?v=oVbBk8RiIX4)
- [Bitwise Operators 4: The Logical Shift Operation](https://www.youtube.com/watch?v=7jkIUgLC29I)
- [Bit Manipulation](https://en.wikipedia.org/wiki/Bit_manipulation)
- [Bitwise Operators](https://en.wikipedia.org/wiki/Bitwise_operation)

## Learning Objectives

Upon completion of this project, you should be able to:

- Independently seek and comprehend information relevant to the topic.
- Manipulate bits and utilize bitwise operators effectively.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- Your code must use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Avoid using functions like `printf`, `puts`, `calloc`, `realloc`, etc.
- You are allowed to use `_putchar`
- Do not push `_putchar.c`; it will not be considered
- The prototypes of all your functions and the `_putchar` function should be included in your header file `main.h`
- All header files should be include-guarded


## Tasks

### 0. binary_to_uint

Write a function that converts a binary number to an unsigned int.

Prototype: `unsigned int binary_to_uint(const char *b);`

...

### 1. print_binary

Write a function that prints the binary representation of a number.

Prototype: `void print_binary(unsigned long int n);`

...

### 2. get_bit

Write a function that returns the value of a bit at a given index.

Prototype: `int get_bit(unsigned long int n, unsigned int index);`

...

### 3. set_bit

Write a function that sets the value of a bit to 1 at a given index.

Prototype: `int set_bit(unsigned long int *n, unsigned int index);`

...

### 4. clear_bit

Write a function that sets the value of a bit to 0 at a given index.

Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`

...

### 5. flip_bits

Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

...

### 6. Endianness

Write a function that checks the endianness.

Prototype: `int get_endianness(void);`

...

### 7. Crackme3

Find the password for this program.

Save the password in the file `101-password`. Your file should contain the exact password, no new line, no extra space.

