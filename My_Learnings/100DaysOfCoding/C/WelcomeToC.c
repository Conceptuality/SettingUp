/**

* Day_001
* Date: 1st July 2021, Thursday.

* Objective
    * In this challenge, we will learn some basic concepts of C that will get you started with the language. You will need to use the same syntax to read input and write output in many C challenges. As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.
* Task
    * This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
* Example
    * The required output is:
        * Hello, World!  
        * Life is beautiful  
* Function Description 
    * Complete the main() function below.
* The main() function has the following input:
    * string s: a string
* Prints
    * *two strings: * "Hello, World!" on one line and the input string on the next line.
* Input Format
    * There is one line of text, .
* Sample Input 0
    * Welcome to C programming.
* Sample Output 0
    * Hello, World!
    * Welcome to C programming.
    
**/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}

/**
* The input is handled by the code editor. 
* To print in C, you can use the printf(), function which is declared in the stdio.h library. 
* The syntax of the printf statement is printf("format string",argument_list); 
* To print a string, , the statement would look like this: printf("%s", s);. 
* Here %s is the format specifier for a null-terminated array of characters. 
* Look at the code given above, to see how to print in C.
**/

/**
* ALTERNATIVE:
        int main ()
        {
          char s[100];
          fgets(s, sizeof(s), stdin);
          printf("Hello, World!\n%s", s);

          return 0;
        }
* gets is deprecated for security reasons, because it can't protect against a buffer overflow. 
* Man page says "Never use this function." fgets is recommended instead.     

**/

