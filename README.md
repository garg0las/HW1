# HW1
Homework for Nanas (the first one)

1. (a) What is the difference between a compiler and an interpreter?

  A compiler writes high level code into machine language while an interpreter reads high level code and processes it.



(b) What is the output of a C program’s main() function by default?

  The output is 0 by default



2. What are header files in C and what is the purpose of the #include directive?

  The header file declares functions and the #inclufe directive makes these function valid for the main file



3. Explain how to declare and define a function in C. What is the purpose of the
return statement in a function? Can a function have more than one return statement?

a function is defined by the code that is placed to the function and the function is declared when the functions name is mentioned



4. What is type casting? Provide an example C function that demonstrates explicit
type casting from double to int. The function should accept two arguments that are both
double and return their sum as an integer.

Type casting is the process of changing a variables datatype. An example would be 
int add(double a, double b) {
    double result = a + b;
    return (int) sum;
}



5. Explain the difference between local and global variables. Provide an example of
each.

A local variable is only used for one function but it is not used for all other functions. A global variable is used for all variables.



6. How are strings declared and initialized in C? What is the role of the null
terminator ‘\0’?

Strings are declared and initialized as an array. \0 marks the end of the string. 



7. What is a pointer in C? How do you pass a pointer to a function? What
advantages are there to passing a pointer instead of a value?

The pointer can point to an address and can be modified using bitmasking.



8. What does the * operator and the & operator do in the context of pointers?

the * operator lets you access the variable and the & operator lets you use the memory address



9. What is the difference between while and do…while loops?

while does something forever and do...while does something even if some conditions aren't true the first time.


10. What does the break statement do? How is it different from the continue
statement?

Break get you out of a function.



11. Explain the use of bitwise operators (i.e. &, |, ^, ~, <<, >>) in C. Which bitwise
operators can be used to set, clear, toggle, or check a specific bit in an integer variable?

bitwise operators work as digital logic. 
& - and
| - or 
^ - Xor / toggle
~ - Inverse/ not
<< - shift left
'>> - shift right'



12. (2 pts) What is the purpose of the PxSEL0 and PxSEL1 GPIO registers? Write two
statements that select the GPIO function for the pins P1.0 and P1.7.





13. (2 pts) Write a void function named P1_1_and_P1_4_Init that configures P1.1 and P1.4
as GPIO inputs with pull-up resistors enabled.




14. (2 pts) Write a void function named Buttons_Init that configures the following pins as
GPIO inputs with pull-down resistors enabled.
• P3.1, P3.6, P5.0, P5.4




15. (2 pts) Write a void function named LEDs_Init that configures the following pins as
GPIO outputs. Initialize the pins to zero.
• P7.0 to P7.7




