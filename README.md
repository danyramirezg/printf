# Printf
Printf is the C language function to do formatted
printing.

Read or watch:

[Secrets of printf](https://www.cypress.com/file/54761/download)

#_printf


This _printf function take any n number of parameters and print it in simple output program. Depending of their data type or special cases. 

# How to compile this repository
The files  and program are written in C so we will use the gcc compiler. keep in mind that this repository is currently being compiled in gcc 4.8.4 using the current flags  -Wall -Werror -Wextra and -pedantic.

You need to have the header of this repository in the directory you are going to compile everything so it works. In this case you need to have "holberton.h" when you do this compile like this:
```$ gcc -Wall -Werror -Wextra -pedantic *.c```

# _printf features
- this _printf can handle the following special flags, keep in mind that this is a work in progress so there are still missing flags:
- ("%")
- ("%c")
- ("%s")
- ("%i")
- ("%d")
- ("%%")
- ("%(unknown)")
- (work in progress)
# Conversion Specifiers
In this section we will explain  what every current flag does and what it takes:
- %c: print a single character Ex: _printf("Welcome to _printf %c", 'H'); 
- %s: print a string of characters Ex: _printf("Hello %s", "World!"); 
- %d: print a decimal (base 10) number Ex: _printf("How much is %d", 100); 
- %i: print an integer (base 10) Ex: _pri:xntf("show me this %i", 2500); 
- %%: print a percent sign Ex: _printf("%%"); 

```
How to activate the man:
```$ man ./man_3_printf```

## Authors
[Pablo Sanchez]
[Daniela Ramirez]
