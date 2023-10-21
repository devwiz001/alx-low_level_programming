# Singly Linked List Functions

A collection of C functions to manipulate singly linked lists.

## Table of Contents

- [Introduction](#introduction)
- [Project Description](#project-description)
- [Function Descriptions](#function-descriptions)
- [Usage](#usage)
- [Requirements](#requirements)
- [Compilation](#compilation)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This project provides a set of C functions that operate on singly linked lists. These functions allow you to create, manipulate, and manage linked lists efficiently.

## Project Description

The project includes the following functions:

### 1. `size_t print_list(const list_t *h)`

- Description: Prints all elements of a list_t list.
- Return: The number of nodes in the list.
- If `str` is `NULL`, it prints `[0] (nil)`.

### 2. `size_t list_len(const list_t *h)`

- Description: Returns the number of elements in a list_t list.

### 3. `list_t *add_node(list_t **head, const char *str)`

- Description: Adds a new node at the beginning of a list_t list. The string `str` is duplicated.
- Return: The address of the new element, or `NULL` if it fails.

### 4. `list_t *add_node_end(list_t **head, const char *str)`

- Description: Adds a new node at the end of a list_t list. The string `str` is duplicated.
- Return: The address of the new element, or `NULL` if it fails.

### 5. `void free_list(list_t *head)`

- Description: Frees a list_t list, including the strings and nodes.

## Usage

To use these functions, include the `lists.h` header file and link with the provided `.c` files in your project. Detailed usage examples are available in each function's description.

## Requirements

- A C compiler (e.g., GCC)
- A POSIX-compliant operating system

## Compilation

You can compile the project using your preferred C compiler, e.g.:

 
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o my_program
```

## Testing

The project includes test programs (e.g., `0-main.c`, `1-main.c`, etc.) that you can compile and run to verify the functionality of the provided functions.

## Contributing

Contributions are welcome! If you find any issues or improvements, feel free to open a pull request on the GitHub repository.

## License

This project is open-source and available under the [MIT License](LICENSE).

 

Your friend can customize and add more details to the README as needed.
