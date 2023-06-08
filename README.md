<h1 align=center>
	<b>LIBFT</b>
</h1>

<p align="center">
  <img src="https://i.imgur.com/U7aswVo.png" width="140" alt="grade" />
  <img src="https://i.imgur.com/FsXaP4p.png" width="120" alt="m" />
</p>

---

<p align="center">
	<b><i>Your very first own library</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/PauloDavi/libft_42?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/PauloDavi/libft_42?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/PauloDavi/libft_42?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/PauloDavi/libft_42?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/PauloDavi/libft_42?color=green" />
</p>

<h3 align="center">
	<a href="#-about-the-project">About</a>
	<span> • </span>
	<a href="#-functions">Functions</a>
	<span> • </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
</h3>

---

## 💡 About the project

In this repository you will find all the code developed during the *libft* project, including the mandatory Parts 1 and 2, the **bonus** functions and other functions that may be useful in the future. These functions must be compiled (through a *Makefile*) into a library ***libft.a*** for later use in the 42cursus program.

---

### Part 1

> In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals.

<p align=center>
• ft_isalpha • ft_isdigit • ft_isalnum • ft_isascii • ft_isprint • ft_strlen • ft_memset • ft_bzero • ft_memcpy • ft_memmove • ft_strlcpy • ft_strlcat • ft_toupper • ft_tolower • ft_strchr • ft_strrchr • ft_strncmp • ft_memchr • ft_memcmp • ft_strnstr • ft_atoi • ft_strdup • ft_calloc • 
</p>

### Part 2

> In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. But they are good utilities for the future.

<p align=center>
• ft_substr • ft_strjoin • ft_strtrim • ft_split • ft_itoa • ft_strmapi • ft_striteri • ft_putchar_fd • ft_putstr_fd • ft_putendl_fd • ft_putnbr_fd •
</p>

### Bonus

> The following functions will allow you to easily use your linked lists.

<p align=center>
• ft_lstnew_bonus • ft_lstadd_front_bonus • ft_lstsize_bonus • ft_lstlast_bonus • ft_lstadd_back_bonus • ft_lstdelone_bonus • ft_lstclear_bonus • ft_lstiter_bonus • ft_lstmap_bonus •
</p>

---

## 💻 Functions

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c) - checks  for  an  alphabetic  character
- [`ft_isdigit`](ft_isdigit.c) - checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c) - checks for an alphanumeric character
- [`ft_isascii`](ft_isascii.c) - checks whether c fits into the ASCII character set
- [`ft_isprint`](ft_isprint.c) - checks for any printable character
- [`ft_toupper`](ft_toupper.c) - convert char to uppercase
- [`ft_tolower`](ft_tolower.c) - convert char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c) - fill memory with a constant byte
- [`ft_strlen`](ft_strlen.c) - calculate the length of a string
- [`ft_bzero`](ft_bzero.c) - zero a byte string
- [`ft_memcpy`](ft_memcpy.c) - copy memory area
- [`ft_memmove`](ft_memmove.c) - copy memory area
- [`ft_strlcpy`](ft_strlcpy.c) - copy string to an specific size
- [`ft_strlcat`](ft_strlcat.c) - concatenate string to an specific size
- [`ft_strchr`](ft_strchr.c) - locate character in string
- [`ft_strrchr`](ft_strrchr.c) - locate character in string
- [`ft_strncmp`](ft_strncmp.c) - compare two strings
- [`ft_memchr`](ft_memchr.c) - scan memory for a character
- [`ft_memcmp`](ft_memcmp.c) - compare memory areas
- [`ft_strnstr`](ft_strnstr.c) - locate a substring in a string
- [`ft_strdup`](ft_strdup.c) - creates a dupplicate for the string passed as parameter

### Functions from `<stdlib.h>`

- [`ft_atoi`](ft_atoi.c) - convert a string to an integer
- [`ft_calloc`](ft_calloc.c) - allocates memory and sets its bytes' values to 0

### Non-standard functions

- [`ft_substr`](ft_substr.c) - returns a substring from a string
- [`ft_strjoin`](ft_strjoin.c) - concatenates two strings
- [`ft_strtrim`](ft_strtrim.c) - trims the beginning and end of string with specific set of chars
- [`ft_split`](ft_split.c) - splits a string using a char as parameter
- [`ft_itoa`](ft_itoa.c) - converts a number into a string
- [`ft_strmapi`](ft_strmapi.c) - applies a function to each character of a string
- [`ft_striteri`](ft_striteri.c) - applies a function to each character of a string
- [`ft_putchar_fd`](ft_putchar_fd.c) - output a char to a file descriptor
- [`ft_putstr_fd`](ft_putstr_fd.c) - output a string to a file descriptor
- [`ft_putendl_fd`](ft_putendl_fd.c) - output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](ft_putnbr_fd.c) - output a number to a file descriptor

### Linked list functions

- [`ft_lstnew_bonus`](ft_lstnew_bonus.c) - creates a new list element
- [`ft_lstadd_front_bonus`](ft_lstadd_front_bonus.c) - adds an element at the beginning of a list
- [`ft_lstsize_bonus`](ft_lstsize_bonus.c) - counts the number of elements in a list
- [`ft_lstlast_bonus`](ft_lstlast_bonus.c) - returns the last element of the list
- [`ft_lstadd_back_bonus`](ft_lstadd_back_bonus.c) - adds an element at the end of a list
- [`ft_lstclear_bonus`](ft_lstclear_bonus.c) - deletes and free list
- [`ft_lstdelone_bonus`](ft_lstdelone_bonus.c) - deletes and free one element
- [`ft_lstiter_bonus`](ft_lstiter_bonus.c) - applies a function to each element of a list
- [`ft_lstmap_bonus`](ft_lstmap_bonus.c) - create a new list and applies a function to each element of an old list

---

## 🛠️ Usage

### Requirements

`libft` requires a *gcc* compiler and some standard libraries.

In your local repository, run `make`

```sh
make 
```

> `make` suports 6 flags: 
> - `make all` or simply `make` compiles only the mandatory functions
> - `make bonus` compiles the bonus functions
> - `make clean` deletes the `.o` files generated during compilation
> - `make fclean` deletes the `.o` and the `libft.a` library file generated
> - `make re` executes `fclean` and `all` in sequence, recompiling the library without the bonus functions
> - `make rebonus` executes `fclean` and `bonus` in sequence, recompiling the library with the bonus functions

To use the library in your code you will need to include the header:

```c
#include "libft.h" 
```

When compiling your own code with `libft`, use a command like this:

```sh
cc -Wall -Wextra -Werror ./main.c -L path/to/libft.a -I path/to/libft.h 
```
