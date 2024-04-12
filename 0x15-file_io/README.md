Project Title: 0x15. C - File I/O
Description
This project focuses on file I/O operations in the C programming language. It covers concepts such as creating, opening, closing, reading, and writing files, as well as understanding file descriptors and system calls. The tasks involve implementing functions to perform various file operations, adhering to specific requirements and constraints outlined in the project description.

Project Details
Language: C
Topics: File I/O, System Calls, File Descriptors
Tools: Ubuntu 20.04 LTS
Tasks Overview
Tread lightly, she is near
Implement a function to read a text file and print its contents to the standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
Under the snow
Create a function to create a file with specified content.
Prototype: int create_file(const char *filename, char *text_content);
Speak gently, she can hear
Develop a function to append text to the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);
cp
Write a program to copy the contents of one file to another.
Usage: cp file_from file_to
elf (Advanced)
Create a program to display information from the ELF header of a file.
Usage: elf_header elf_filename
Project Structure
README.md: Overview of the project, description, tasks, and relevant details.
0-read_textfile.c: Implementation of the function to read and print a text file.
1-create_file.c: Function to create a file with specified content.
2-append_text_to_file.c: Implementation of the function to append text to a file.
3-cp.c: Program to copy the contents of one file to another.
100-elf_header.c: Program to display information from the ELF header of a file.
main.h: Header file containing function prototypes.
Utility scripts: Included test scripts, compilation commands, and usage examples.
Development Guidelines
Allowed editors: vi, vim, emacs
Compile with GCC using specific options: -Wall -Werror -Wextra -pedantic -std=gnu89
Follow the Betty style for code formatting.
Limit the number of functions per file to five.
Use only permitted C standard library functions and system calls.
Maintain proper file permissions and error handling.
For detailed implementation, refer to individual code files in the repository..
