# 42-GetNextLine

*This project was created as part of the 42 curriculum by asyeo.*

## Overview
**ft_printf** is 1/3 projects of Milestone One, following `libft`, `get_next_line`, and `Born2BeRoot`. The purpose of this project is simple; to recreate the functionality of the `printf` function from standard I/O library (`<stdio.h>`). This project does not encompass all functionalities, but the crux of the function is replicated.

# Supported Format Specifiers
As afforementioned, the function created within the scope of this project only accounts for a number of specifiers, this segment will list and explain each one.

| Specifier   | Description                             |
| ----------- | --------------------------------------- |
| `%c`        | Prints a single character               |
| `%s`        | Prints a string                         |
| `%p`        | Prints a pointer address in hexadecimal |
| `%d` / `%i` | Prints a signed decimal integer         |
| `%u`        | Prints an unsigned decimal integer      |
| `%x`        | Prints a lowercase hexadecimal integer  |
| `%X`        | Prints an uppercase hexadecimal integer |
| `%%`        | Prints a literal percent sign           |

# Running and Testing
This section describes the post git-clone process of compiling and testing that you can replicate. Furthermore, more details are entailed regarding the makefile to ensure ease of use.

## Compilation
A makefile has been included to ease the compilation process. The makefile creates a library containing the `printf` function named `libftprintf.a`. Below are some rules specified in the makefile for ease of use.

`make` - Simply creates the library. <br>
`make clean` - Removes object files. <br>
`make fclean` - Removes object files and the library file (*.a). <br>
`make re` - Executes `make fclean && make` consecutively. <br>

## Testing
Similar to previous projects, a community supported tester was used to validate the results before submission. The tester used can be accessed in this repository through this link: https://github.com/Tripouille/printfTester#

# Resources

The resources used are a mix of articles from different websites and articles, as well as a handful of videos. Everything else was googled individually.

### Articles
[Variadic Functions in C](https://www.geeksforgeeks.org/c/variadic-functions-in-c/), [Variadic Functions 2](https://www.tutorialspoint.com/cprogramming/c_variadic_functions.htm), [va_args macros](https://www.tutorialspoint.com/c_standard_library/c_macro_va_arg.htm), [va_arg](https://en.cppreference.com/w/c/variadic/va_arg.html), [Secrets of va_list](https://hackernoon.com/what-is-va_list-in-c-exploring-the-secrets-of-ft_printf), [Definition of va_list](https://stackoverflow.com/questions/12855271/which-is-the-definition-of-va-list), [Variadic Arguments](https://www.ibm.com/docs/en/i/7.4.0?topic=lf-va-arg-va-copy-va-end-va-start-handle-variable-argument-list)


## Additional Notes
> [!NOTE]
> I suffered, a lot. I lost a lot of hair and I still have terrible memory.
> Additionally, I learnt about the (forbidden) Ternary Operator and Inode table while researching into GNL.
> Guess who had a metldown over printf?

# Author
asyeo | 42 Kuala Lumpur