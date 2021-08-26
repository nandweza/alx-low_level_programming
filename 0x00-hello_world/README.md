# **0x00-hello_world**
<br>
0. Preprocessor<br>
mandatory<br>
Write a script that runs a C file through the preprocessor and save the result into another file.
<br>
The C file name will be saved in the variable $CFILE<br>
The output should be saved in the file c<br>
<br>
1. Compiler<br>
mandatory<br>
Write a script that compiles a C file but does not link.
<br>
The C file name will be saved in the variable $CFILE<br>
The output file should be named the same as the C file, but with the extension .o instead of .c.<br>
Example: if the C file is main.c, the output file should be main.o<br>
<br>
2. Assembler<br>
mandatory<br>
Write a script that generates the assembly code of a C code and save it in an output file.<br>
<br>
The C file name will be saved in the variable $CFILE<br>
The output file should be named the same as the C file, but with the extension .s instead of .c.<br>
Example: if the C file is main.c, the output file should be main.s<br>
<br>
3. Name<br>
mandatory<br>
Write a script that compiles a C file and creates an executable named cisfun.<br>
<br>
The C file name will be saved in the variable $CFILE<br>
<br>
4. Hello, puts<br>
mandatory<br>
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
<br>
Use the function puts<br>
You are not allowed to use printf<br>
Your program should end with the value 0<br>
<br>
5. Hello, printf<br>
mandatory<br>
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
<br>
Use the function printf<br>
You are not allowed to use the function puts<br>
Your program should return 0<br>
Your program should compile without warning when using the -Wall gcc option<br>
<br>
6. Size is not grandeur, and territory does not make a nation<br>
mandatory<br>
Write a C program that prints the size of various types on the computer it is compiled and run on.
<br>
You should produce the exact same output as in the example<br>
Warnings are allowed<br>
Your program should return 0<br>
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
<br>
7. Intel<br>
#advanced<br>
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
<br>
The C file name will be saved in the variable $CFILE.<br>
The output file should be named the same as the C file, but with the extension .s instead of .c.<br>
Example: if the C file is main.c, the output file should be main.s
<br>
8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity<br>
#advanced<br>
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
<br>
You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts<br>
Your program should return 1<br>
Your program should compile without any warnings when using the -Wall gcc option