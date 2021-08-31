# **0x02-Functions_Nested_Loops**
<br>
0. _putchar<br>
mandatory<br>
Write a program that prints Holberton, followed by a new line.
<br>
The program should return 0
<br>
<br>
1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game<br>
mandatory<br>
Write a function that prints the alphabet, in lowercase, followed by a new line.
<br>
Prototype: void print_alphabet(void);<br>
You can only use _putchar twice in your code
<br>
<br>
2. 10 x alphabet<br>
mandatory<br>
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
<br>
Prototype: void print_alphabet_x10(void);<br>
You can only use _putchar twice in your code
<br>
<br>
3. islower<br>
mandatory<br>
Write a function that checks for lowercase character.
<br>
Prototype: int _islower(int c);<br>
Returns 1 if c is lowercase<br>
Returns 0 otherwise<br>
FYI: The standard library provides a similar function: islower. Run man islower to learn more.
<br>
<br>
4. isalpha<br>
mandatory<br>
Write a function that checks for alphabetic character.
<br>
Prototype: int _isalpha(int c);<br>
Returns 1 if c is a letter, lowercase or uppercase<br>
Returns 0 otherwise<br>
FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.
<br>
<br>
5. Sign<br>
mandatory<br>
Write a function that prints the sign of a number.
<br>
Prototype: int print_sign(int n);<br>
Returns 1 and prints + if n is greater than zero<br>
Returns 0 and prints 0 if n is zero<br>
Returns -1 and prints - if n is less than zero
<br>
<br>
6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you<br>
mandatory<br>
Write a function that computes the absolute value of an integer.
<br>
Prototype: int _abs(int);<br>
FYI: The standard library provides a similar function: abs. Run man abs to learn more.
<br>
<br>
7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important<br>
mandatory<br>
Write a function that prints the last digit of a number.
<br>
Prototype: int print_last_digit(int);<br>
Returns the value of the last digit
<br>
<br>
8. I'm federal agent Jack Bauer, and today is the longest day of my life<br>
mandatory<br>
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
<br>
Prototype: void jack_bauer(void);<br>
You can listen to this soundtrack while coding :)
<br>
<br>
9. Learn your times table<br>
mandatory<br>
Write a function that prints the 9 times table, starting with 0.
<br>
Prototype: void times_table(void);<br>
Format: see example
<br>
<br>
10. a + b<br>
mandatory<br>
Write a function that adds two integers and returns the result.
<br>
Prototype: int add(int, int);
<br>
<br>
11. Holberton School, 98 Battery Street, the OG<br>
mandatory<br>
Write a function that prints all natural numbers from n to 98, followed by a new line.
<br>
Prototype: void print_to_98(int n);<br>
Numbers must be separated by a comma, followed by a space<br>
Numbers should be printed in order<br>
The first printed number should be the number passed to your function<br>
The last printed number should be 98<br>
You are allowed to use the standard library
<br>
<br>
12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself<br>
#advanced<br>
Write a function that prints the n times table, starting with 0.
<br>
Prototype: void print_times_table(int n);<br>
If n is greater than 15 or less than 0 the function should not print anything<br>
Format: see example
<br>
<br>
13. Nature made the natural numbers; All else is the work of women<br>
#advanced<br>
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
<br>
You are allowed to use the standard library
<br>
<br>
14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A
<br>
#advanced<br>
Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
<br>
The numbers must be separated by comma, followed by a space , <br>
You are allowed to use the standard library
<br>
<br>
15. Even Liber Abbaci<br>
#advanced<br>
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.
<br>
You are allowed to use the standard library
<br>
<br>
16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+<br>
#advanced<br>
Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
<br>
The numbers should be separated by comma, followed by a space ,<br>
You are allowed to use the standard library<br>
You are not allowed to use any other library (You can’t use GMP etc…)<br>
You are not allowed to use long long, malloc, pointers, arrays/tables, or structures<br>
You are not allowed to hard code any Fibonacci number (except for 1 and 2)