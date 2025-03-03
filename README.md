# 📚 Libft - 42 School Project

## 🌟 Overview
     Libft is a C programming project from the 42 School curriculum. It involves building a custom library of standard C functions (e.g., strlen, memset) and additional utility functions from scratch. The project lays the foundation for future 42 projects by providing reusable, efficient tools.

## Example usage:
    #include "libft.h"

    int main(void) {
        char *str = ft_strdup("Hello, Libft!");
        ft_putstr_fd(str, 1);
        free(str);
        return 0;
    }

## ✨ Features
    Mandatory Part: Reimplements functions like ft_strlen, ft_memcpy, ft_atoi, and more.
    Additional Part: Includes utilities like ft_substr, ft_strjoin, ft_split.
    Bonus:
      Linked list functions (ft_lstnew, ft_lstadd_front, ft_lstsize, etc.).

## 🚀 Installation
    Clone the repo:
        git clone https://github.com/b-kolani/libft.git
    Enter the directory:
        cd libft
  
## Compile:
    make
    Run make bonus for bonus functions.
    This creates libft.a, a static library.

## 🖥️ Usage
     Link libft.a in your project:
      #include "libft.h"

    int main(void) {
        char *s = "42 School";

        ft_putendl_fd(s, 1); // Prints "42 School" followed by a newline
        return 0;
    }
    
    Compile with:
    gcc main.c -L. -lft -o test

## 📂 Project Structure
    ft_*.c	Individual function implementations
    libft.h	Header with prototypes and includes
    Makefile	Build rules for library creation

## 🎓 Learning Outcomes
    - Rebuilt core C functions to understand their mechanics.
    - Mastered memory management and pointer manipulation.
    - Learned to create a reusable library with a consistent API.

## ⚙️ Requirements
    - OS: UNIX-based (Linux, macOS).
    - Compiler: GCC or similar.

## 👤 Author
    [KOlani Biman / b-kolani]

