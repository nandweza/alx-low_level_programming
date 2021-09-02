#**0x04-More_Functions_Nested_Loops**
<br>
0. isupper<br>
mandatory<br>
Write a function that checks for uppercase character.
<br>
Prototype: int _isupper(int c);<br>
Returns 1 if c is uppercase<br>
Returns 0 otherwise<br>
FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.<br>
<br>
1. isdigit<br>
mandatory<br>
Write a function that checks for a digit (0 through 9).
<br>
Prototype: int _isdigit(int c);<br>
Returns 1 if c is a digit<br>
Returns 0 otherwise<br>
FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.<br>
<br>
2. Collaboration is multiplication<br>
mandatory<br>
Write a function that multiplies two integers.
<br>
Prototype: int mul(int a, int b);<br>
<br>
3. The numbers speak for themselves<br>
mandatory<br>
Write a function that prints the numbers, from 0 to 9, followed by a new line.
<br>
Prototype: void print_numbers(void);<br>
You can only use _putchar twice in your code<br>
<br>
4. I believe in numbers and signs<br>
mandatory<br>
Write a function that prints the numbers, from 0 to 9, followed by a new line.
<br>
Prototype: void print_most_numbers(void);<br>
Do not print 2 and 4<br>
You can only use _putchar twice in your code<br>
<br>
5. Numbers constitute the only universal language<br>
mandatory<br>
Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
<br>
Prototype: void more_numbers(void);<br>
You can only use _putchar three times in your code<br>
<br>
6. The shortest distance between two points is a straight line<br>
mandatory<br>
Write a function that draws a straight line in the terminal.
<br>
Prototype: void print_line(int n);<br>
You can only use _putchar function to print<br>
Where n is the number of times the character _ should be printed<br>
The line should end with a \n<br>
If n is 0 or less, the function should only print \n<br>
<br>
7. I feel like I am diagonally parked in a parallel universe<br>
mandatory<br>
Write a function that draws a diagonal line on the terminal.
<br>
Prototype: void print_diagonal(int n);<br>
You can only use _putchar function to print<br>
Where n is the number of times the character \ should be printed<br>
The diagonal should end with a \n<br>
If n is 0 or less, the function should only print a \n<br>
<br>
8. You are so much sunshine in every square inch<br>
mandatory<br>
Write a function that prints a square, followed by a new line.
<br>
Prototype: void print_square(int size);<br>
You can only use _putchar function to print<br>
Where size is the size of the square<br>
If size is 0 or less, the function should print only a new line<br>
Use the character # to print the square<br>
<br>
9. Fizz-Buzz<br>
mandatory<br>
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.
<br>
Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
<br>
Each number or word should be separated by a space<br>
You are allowed to use the standard library<br>
<br>
10. Triangles<br>
mandatory<br>
Write a function that prints a triangle, followed by a new line.
<br>
Prototype: void print_triangle(int size);<br>
You can only use _putchar function to print<br>
Where size is the size of the triangle<br>
If size is 0 or less, the function should print only a new line<br>
Use the character # to print the triangle<br>
<br>
11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic<br>
#advanced<br>
The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
<br>
Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
<br>
You are allowed to use the standard library<br>
Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm<br>
<br>
12. Numbers have life; they're not just symbols on paper<br>
#advanced<br>
Write a function that prints an integer.
<br>
Prototype: void print_number(int n);<br>
You can only use _putchar function to print<br>
You are not allowed to use long<br>
You are not allowed to use arrays or pointers<br>
You are not allowed to hard-code special values