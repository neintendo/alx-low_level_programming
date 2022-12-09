# 0x00-hello_world.

**0-preprocessor:** runs a C file through the preprocessor and saves the result into another file.

- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`

**1-compiler:** compiles a C file but does not link.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is `main.c`, the output file should be `main.o`

**2-assembler:** generates the assembly code of a C code and saves it in an output file.

- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is `main.c`, the output file should be `main.s`

**3-name:** compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable `$CFILE`

**4-puts.c:** the program prints exactly `"Programming is like building a multilingual puzzle,` followed by a new line.

- Uses the function puts
- The program should end with the value 0

**5-printf.c:** the program prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

- Uses the function printf
- The program should return 0
- The program should compile without warning when using the -Wall gcc option

**6-size.c:** the program prints the size of various types on the computer it is compiled and run on.

**100-intel:** the script generates the assembly code (Intel syntax) of a C code and saves it in an output file.

- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is `main.c`, the output file should be `main.s`

**101-quote.c:** program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

- The program should return 1


