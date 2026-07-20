*This project has been created as part of the 42 curriculum by mlucka*



# Description
libft is a custom C library developed as part of the 42 curriculum.
The goal of this project is to recreate a set of standard C library functions, as well as additional utility functions, in order to better understand memory management, strings, character handling, linked lists, and low-level programming concepts.

This library serves as a foundation for future 42 projects, because its functions can be reused in later programs.

# Instruction
### Compilation

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # full rebuild
```
### Usage

after you create the library libft.a with "make".
copy `libft.a` and `libft.h` into your project and include the header in your source files:

```c
#include "libft.h"
```

then link your main.c with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## Library Contents
The library contains reimplemented functions from the standard C library and additional helper functions.

## Included Functions

### Mandatory Functions
The mandatory functions of libft are either functions from the standard C library or other useful functions for future c projects.

#### Functions to check and manipulate characters:
| Function | Description |
|----------|-------------|
| `ft_isalpha` | checks for an alphabetic character. |
| `ft_isdigit` | checks for a digit (0 through 9). |
| `ft_isalnum` | checks for an alphanumeric character. |
| `ft_isascii` | checks whether c fits into the ASCII character set. |
| `ft_isprint` | checks for any printable character. |
| `ft_toupper` | convert char to uppercase. |
| `ft_tolower` | convert char to lowercase. |



#### Functions to manipulate strings:
| Function | Description |
|----------|-------------|
| `ft_strlen` | calculate the length of a string. |
| `ft_strlcpy` | copy string to an specific size. |
| `ft_strlcat` | concatenate string to an specific size. |
| `ft_strchr` | locate character in string. |
| `ft_strrchr` | locate character in string. |
| `ft_strncmp` | compare two strings. |
| `ft_strnstr` | locate a substring in a string. |

#### Functions to manipulate strings (non standard functions):
| Function | Description |
|----------|-------------|
| `ft_substr` | returns a substring from a string. |
| `ft_strjoin` | concatenates two strings. |
| `ft_strtrim` | trims the beginning and end of string with specific set of chars. |
| `ft_split` | splits a string using a char as parameter. |
| `ft_strmapi` | applies a function to each character of a string. |
| `ft_striteri` | applies a function to each character of a string. |

#### Functions to manipulate memory:
| Function | Description |
|----------|-------------|
| `ft_calloc` | allocates memory and sets its bytes' values to 0. |
| `ft_memset` | `fill` |emory with a constant byte. |
| `ft_bzero` | zero a byte string. |
| `ft_memcpy` | copy memory area. |
| `ft_memmove` | copy memory area. |
| `ft_memchr` | scan memory for a character. |
| `ft_memcmp` | compare memory areas. |
| `ft_strdup` | creates a dupplicate for the string passed as parameter. |

#### Functions for numbers:
| Function | Description |
|----------|-------------|
| `ft_atoi` | convert a string to an integer. |
| `ft_itoa` | converts a number into a string. |

#### Functions to write to a file descriptor (non standard functions):
| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | output a char to a file descriptor. |
| `ft_putstr_fd` | output a string to a file descriptor. |
| `ft_putendl_fd` | output a string to a file descriptor, followed by a new line. |
| `ft_putnbr_fd` | output a number to a file descriptor. |

#### Functions to manipulate list:
| Function | Description |
|----------|-------------|
| `ft_lstnew` | creates a new list element. |
| `ft_lstadd_front` | adds an element at the beginning of a list. |
| `ft_lstsize` | counts the number of elements in a list. |
| `ft_lstlast` | returns the last element of the list. |
| `ft_lstadd_back` | adds an element at the end of a list. |
| `ft_lstdelone` | `frees node's content using the function ’del’ but does NOT free the next node. |
| `ft_lstclear` | deletes and free list. |
| `ft_lstiter` | applies a function to each element of a list. |
| `ft_lstmap` | applies a function to each element of a list. |

## Resources

### References

- `man` pages for all reimplemented libc functions
- [Makefile Tutorial](https://makefiletutorial.com/#top): reference for writing the Makefile
- [42 Norm](https://github.com/42School/norminette): coding standard enforced at 42

### AI Usage

AI was used to get explanations of new difficult concepts after reading man, stackoverflow, and asked friend.

AI was not used to generate the core project logic without understanding; it was only used as a support tool for explanation and documentation.

## Notes
This project was written in C and follows the rules of the 42 curriculum.
The focus was on understanding how standard library functions work internally and on writing clean, reusable code.Makefile TutorialMakefile Tutorial by ExampleMakefile Tutorial by Example