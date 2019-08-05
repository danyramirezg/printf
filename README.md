# _Printf

Is a function of C lenguange and writes the C string pointed by _format_ to the standard output. If _format_ includes _format specifiers_ (subsequences beginning with % strikethrough text), the additional arguments following _format_ are formatted and inserted in the resulting string replacing their respective specifiers.

## Example
**Input**
```
_printf("Color %s, Number %d, Float %4,2f", "red", 123456, 3,14);
```
This _printf function take any n number of parameters and print it in simple output program. Depending of their data type or special cases. In the above example the output would be.

**Output**  
```
Color red, Number 123456, Float 3,14
```
If you are interested in knowing more about how this function works. Read more: [Secrets of Printf](https://www.cypress.com/file/54761/download) by Professor Don Colton.

# How to compile this repository

The files and program are written in C so we will use the gcc compiler. keep in mind that this repository is currently being compiled in **gcc 4.8.4** using the current flags **-Wall -Werror -Wextra and -pedantic.**

You need to have the header of this repository in the directory you are going to compile everything so it works. In this case you need to have "holberton.h" when you do this compile like this:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

##  _printf features

This _printf can handle the following special flags, keep in mind that this is a work in progress so there are still missing flags:

|specifier |Output | Example |
|--|--|--|
| "%c" | Character | c
|"%s"|String of characters|sample|
|"%" "%%"|A % followed by another % character will write a single % to the stream. | %
|"%i"|Signed decimal integer| 392
|"%d"|Signed decimal integer|125
|"%(unknown)"| % followed by another % character| %
*(work in progress)*

```
_printf("Welcome to _printf %c",'H');
```

**How to activate the man:**
```$ man ./man_3_printf```
## Authors
Pablo Sánchez
Daniela Ramírez

