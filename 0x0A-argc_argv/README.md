# **0x0A-argc_argv**
<br>
<br>
File 0-whatsmyname.c: a program that prints its name, followed by a new line.
<br>
If you rename the program, it will print the new name, without having to compile it again<br>
You should not remove the path before the name of the program
<br>
File 1-args.c: a program that prints the number of arguments passed into it.
<br>
Your program should print a number, followed by a new line
<br>
File 2-args.c: a program that prints all arguments it receives
<br>
All arguments should be printed, including the first one<br>
Only print one argument per line, ending with a new line
<br>
File 3-mul.c: a program that multiplies two numbers.
<br>
Your program should print the result of the multiplication, followed by a new line<br>
You can assume that the two numbers and result of the multiplication can be stored in an integer<br>
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
<br>
File 4-add.c: a program that adds positive numbers.
<br>
Print the result, followed by a new line<br>
If no number is passed to the program, print 0, followed by a new line<br>
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1<br>
You can assume that numbers and the addition of all the numbers can be stored in an int
<br>
File 100-change.c: a program that prints the minimum number of coins to make change for an amount of money.
<br>
Usage: ./change cents<br>
where cents is the amount of cents you need to give back<br>
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1<br>
you should use atoi to parse the parameter passed to your program<br>
If the number passed as the argument is negative, print 0, followed by a new line<br>
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent