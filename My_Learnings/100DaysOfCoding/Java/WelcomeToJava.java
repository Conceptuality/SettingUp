/**
* Day_001
* Date: 1st July 2021, Thursday.

* Welcome to the world of Java! In this challenge, we practice printing to stdout.
* The code stubs in your editor declare a Solution class and a main method. Complete the main method by copying the two lines of code below and pasting them inside the body of your main method.
    * System.out.println("Hello, World.");
    * System.out.println("Hello, Java.");
* Input Format
    * There is no input for this challenge.

* Output Format
    * You must print two lines of output:
        * Print Hello, World. on the first line.
        * Print Hello, Java. on the second line.
* Sample Output
    * Hello, World.
    * Hello, Java.
**/

public class WelcomeToJava 
{
    public static void main(String[] args) 
    {
       /*  
            Enter your code here. 
            Print output to STDOUT. 
            Your class should be named Solution. 
       */
        System.out.println("Hello, World.");
        System.out.println("Hello, Java.");
      
      // if(System.out.printf("Hello, World.\nHello, Java.")!=null){}
      // Because why not!
    
    }
}

/**
* There are three kinds of print statements:
    * System.out.print(argument) just prints out its argument
    * System.out.println(argument) prints out its argument and ends the line.
    * System.out.printf(format, arguments), gives more control over how things are printed.

* A print statement is actually a call to the print or println method of the System.out object. 
* The print method takes exactly one argument; the println method takes one argument or no arguments.
* However, the one argument may be a String which you create using the string concatenation operator +. 
* If you ask to print an object, the print and println methods call that object's toString() method to get a printable string.

**/
