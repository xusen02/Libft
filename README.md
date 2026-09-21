*This project has been created as part of the 42 curriculum by [txu-sen].*

## Description

**Libft** is the foundational coding project at 42. The primary goal is to rebuild a functional subset of the standard C library (`libc`) from scratch, alongside a series of custom utility functions and linked list data structures. 

By reimplementing functions like `strlen`, `memcpy`, `strlcpy`, and `atoi`, students develop a rigorous understanding of memory allocation, pointer arithmetic, string parsing, and low-level data handling. The final product is packaged into a static library (`libft.a`), which becomes an essential tool utilized across subsequent core curriculum projects.

---

## Detailed Library Description

The library is organized into three distinct operational modules:

### 1. Libc Functions
Recreations of standard C library functions, prefixed with `ft_`:
* **Character Evaluation & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* **String Examination & Manipulation:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`
* **Memory Management:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Numeric Parsing:** `ft_atoi`

### 2. Additional Functions
Custom utility functions designed for extended string manipulation, memory splitting, and file descriptor output:
* **String Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
* **File Descriptors:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked Lists
A comprehensive suite for managing singly linked lists (`t_list`):
* **List Management:** `ft_lstnew`, `ft_lstsize`, `ft_lstlast`
* **Node Insertion:** `ft_lstadd_front`, `ft_lstadd_back`
* **Memory Deallocation:** `ft_lstdelone`, `ft_lstclear`
* **Iteration & Mapping:** `ft_lstiter`, `ft_lstmap`

---
## Resources

### Documentation & References
* [man pages (Linux/POSIX)](https://man7.org/linux/man-pages/) — For verifying the exact behavior and return values of standard libc functions.
* [C Programming language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) — Standard reference for pointers, memory layouts, and data structures in C.
* 42 Norminette Documentation — Coding standards and formatting requirements.

### AI Usage Disclosure
* **Task:** Formatting and structuring the `README.md` file layout according to 42 requirements.
* **Parts of the project:** AI assisted in organizing markdown sections, drafting documentation templates, and ensuring all mandatory prompt elements were integrated correctly. Core C code implementations were written independently by the student.

## Instructions

### Compilation
The project includes a complete `Makefile` to handle compilation rules for the static library.

```bash
# Compile core mandatory functions
make

# Remove all temporary object files
make clean

# Remove object files and the final static library (libft.a)
make fclean

# Perform a complete clean and re-compile
make re



# Libft
