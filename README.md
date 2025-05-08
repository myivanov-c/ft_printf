# ft_printf – 42 Lisboa

 A custom implementation of the C `printf` function  
 Project validated with a total score of **100%**

---

## 📖 About

**ft_printf** is a core project at 42 that replicates the behavior of the standard C `printf` function.  

This project introduces variadic functions in C and teaches how to write flexible, modular, and robust output logic — a key skill for systems-level programming.

---

## 🛠️ Skills Gained

- Handling **variadic arguments** using `stdarg.h`
- Implementing **modular printing functions**
- Recursion and number base conversion
- Debugging and memory safety
- Clean Makefile and header structure

---

## ✅ Format Specifiers Implemented

| Specifier | Description                       |
|-----------|-----------------------------------|
| `%c`      | Character                         |
| `%s`      | String                            |
| `%p`      | Pointer address                   |
| `%d`      | Decimal (int)                     |
| `%i`      | Integer                           |
| `%u`      | Unsigned decimal                  |
| `%x`      | Lowercase hexadecimal             |
| `%X`      | Uppercase hexadecimal             |
| `%%`      | Print a literal `%`               |

---

## 🧹 Makefile Commands

| Command       | Description                                |
|---------------|--------------------------------------------|
| `make`        | Compile source files into `libftprintf.a`  |
| `make clean`  | Remove object files (`*.o`)                |
| `make fclean` | Remove object files and the `.a` library   |
| `make re`     | Clean and recompile everything             |

---

## 📌 Notes

- All code written in C and formatted under **Norminette**
- No usage of the real `printf`, `sprintf`, or standard format functions
- Modular codebase, easily extendable for future specifiers
- Fully validated and passes all 42 mandatory test cases

---

## 👤 Author

**Mykyta Ivanov**  
Student @ 42 Lisboa  
GitHub: [@myivanov-c](https://github.com/myivanov-c)

---

## ✅ Project Status

- Completed  
- Validated with a score of **100%**
- Ready to be reused, extended, or adapted for new formatting systems
