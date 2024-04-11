# 0x1A. C - Hash tables

## Description
This project focuses on implementing hash tables in C and understanding their underlying concepts. Hash tables are data structures that store key-value pairs and allow for efficient retrieval of values based on their keys. The project covers various aspects such as hash functions, collision handling, and the advantages and use cases of hash tables.

## Resources
- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Hashing/hashing.html)
- [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-does-a-hash-table-work)

## Learning Objectives
By the end of this project, you are expected to be able to:
- Explain what a hash function is and what makes a good hash function
- Understand how hash tables work and how to use them
- Describe collisions and the main ways of dealing with them in the context of a hash table
- Discuss the advantages and drawbacks of using hash tables
- Identify the most common use cases of hash tables

## Requirements
- Allowed editors: vi, vim, emacs
- All files should be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- Each file should contain no more than 5 functions
- Allowed to use the C standard library
- Prototypes of all functions should be included in a header file named `hash_tables.h`
- Header files should be include guarded

## Tasks
### 0. >>> ht = {}
Write a function that creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
- Returns a pointer to the newly created hash table or NULL if something went wrong

### 1. djb2
Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

### 2. key -> index
Write a function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- Uses the `hash_djb2` function

### 3. >>> ht['betty'] = 'cool'
Write a function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- Returns 1 if it succeeded, 0 otherwise
- In case of collision, adds the new node at the beginning of the list

### 4. >>> ht['betty']
Write a function that retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
- Returns the value associated with the element, or NULL if key couldn't be found

### 5. >>> print(ht)
Write a function that prints a hash table.

- Prototype: `void hash_table_print(const hash_table_t *ht);`
- Prints the key/value pairs in the order they appear in the array of the hash table

### 6. >>> del ht
Write a function that deletes a hash table.

- Prototype: `void hash_table_delete(hash_table_t *ht);`
- Frees the memory allocated for the hash table

### 7. $ht['Betty'] = 'Cool'
(Advanced)
Write functions to implement a sorted hash table with ordered key-value pairs.

- Prototype: `shash_table_t *shash_table_create(unsigned long int size);`
- Prototype: `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
- Prototype: `char *shash_table_get(const shash_table_t *ht, const char *key);`
- Prototype: `void shash_table_print(const shash_table_t *ht);`
- Prototype: `void shash_table_print_rev(const shash_table_t *ht);`
- Prototype: `void shash_table_delete(shash_table_t *ht);`

## Tests
It's recommended to work together on a set of tests to ensure the correctness of the functions.

## Credits
This project is part of the ALX Software Engineering program.
