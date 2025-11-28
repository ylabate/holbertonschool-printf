# Holbertonschool-printf

## Overview

**holbertonschool-printf** is a project developed to deepen the understanding of key concepts in the C programming language.

the core function is [_printf.c](printf.c), which is a custom implementation of printf,

All of the project's source code was developed and compiled using the strict gcc arguments:  
`-Wall -Werror -Wextra -pedantic -std=gnu89`  
This ensures high code quality and maximum portability.

## Usage

**`int _printf(const char *format, ...);`**

where **format** is the base string to be printed,
for adding variable integration you have to use **%** followed by a character

| character | variable type | printed to |
|:--:|:--:|:--:|
| **s** | string | [string](print_string.c) |
| **c** | char | [char](print_char.c) |
| **i, d** | integer | [integer](print_integer.c) |
| **u** | unsigned integer | [unsigned integer](print_unsigned_integer.c) |
| **b** | integer | [binary](print_binary.c) |
| **o** | integer | [octal](print_octal.c) |
| **x** | integer | [hexadecimal](print_hexadecimal_lower.c) |
| **X** | integer | [hexadecimal](print_hexadecimal_upper.c) |
| **p** | any | [the adress in hexadecimal](print_adresse.c) |
| **%** | none | [%](print_percent.c) |

## How it work

the **_printf** function is mainly based on the variadic function to get the variable, and on the function pointer with a dedicated function [**get_type();**](get_type.c) to print the variables in the good format

### Flowchart

> ```mermaid
> ---
> config:
>   layout: elk
>   theme: neo-dark
> ---
> flowchart TB
>  subgraph B["Initialization"]
>         1("Start argument list (va_start)")
>         2("Allocate memory buffers
>         (buffer & temp_buffer)")
>         4("Initialize counters to 0")
>   end
>  subgraph END["end"]
>         6("write buffer buffer_index")
>         7("va_end args")
>         8("free buffer")
>         9(["return buffer_index
>         STOP"])
>   end
>     A(["START
>     Call _printf"]) --> B
>     Abis[/"const char *format, ..."/] --> B
>     B --> Bbis{"format == NULL"}
>     Bbis -- false --> C{"Are there characters left?
>     (format[i] != \0)"}
>     Bbis -- true --> END
>     C -- false --> END
>     C -- true --> D@{ label: "Is current char '%'" }
>     D -- false --> E("Copy char to buffer
>     & increment index")
>     D -- true --> F@{ label: "Identify specifier type after '%'" }
>     E --> C
>     F --> H("Convert argument
>     & store in temp_buffer")
>     H --> I("Check buffer capacity
>     (Resize if needed)")
>     I --> K("Copy temp_buffer to main buffer
>     & update indexes")
>     K --> C
> 
>     D@{ shape: diamond}
>     F@{ shape: rounded}
>     style A stroke-width:7px;
>     style 9 stroke-width:7px;
>     style C stroke-width:4px;
>     style D stroke-width:4px;
>     style Bbis stroke-width:4px;
> ```

## Exemple

```c
_printf("%s", string_var);
_printf("%u", unsigned_integer_var);
_printf("%p", any_var);
```

## How to use

### clone the repo

```bash
git clone https://github.com/ylabate/holbertonschool-printf.git
cd holbertonschool-printf
```

### make your main file

```bash
echo '#include "main.h"\n\nint main(void)\n{\n\t/* your code go here */\n\t_printf("test\\n");\nreturn (0);\n}' > main.c
```

### Compile and Run

To successfully compile your program, you must include all your source files (`*.c`) including your main.c in the **`gcc`** command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
./a.out
```

## Contributor

this project was developped by only myself in 5 days for the Holberton School of rodez

* [**ylabate**](https://github.com/ylabate)
