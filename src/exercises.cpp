#include <iostream>
#include <iomanip>
#include "exercises.hpp"

/*
std::cout is a standard output stream in C++ which is used to print to the console.
The << operator is used to insert data into the stream.
Create a C++ program that prints the following output when executed on two lines.

My first C-program
Can write on two lines
*/
void exercise_1()
{
    std::cout<<"My first program"<<'\n'<<"can write on two lines"<<std::endl;
}

/*
Write a program that calculates the area of a triangle given the base and height,
and outputs the area to the screen. Use the formula area = (base * height) / 2.
Assume the base and height are positive.

For example, exercise_2(2.0, 10.0) should print
Area of the triangle: 10.000000

*/
void exercise_2(double base, double height)
{
    int a  = (base*height)/2;
    std::cout<<"Area of the triangle: "<<std::fixed<<::std::setprecision(6)<<a<<std::endl;
}

/*
Predict the value of each expression and input your answers as the variables.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/
void exercise_3()
{
    // Write your answers here
    int answer1 = 11;
    int answer2 = 1;
    int answer3 = 0;
    int answer4 = 1;

    // The print statements below will all print 1 if your answers are correct
    std::cout << (answer1 == (-3 + 4 * 5 - 6)) << std::endl;
    std::cout << (answer2 == (3 + 4 % 5 - 6)) << std::endl;
    std::cout << (answer3 == (-3 * 4 % -6 / 5)) << std::endl;
    std::cout << (answer4 == ((7 + 6) % 5 / 2)) << std::endl;
}

/*
Create a C++ program that will perform integer division of 10 with any integer provided
and print the result.

For example:

exercise_4(2) will print
"10 divided by 2 is 5".

The special case, exercise_4(0), should not try and divide. Instead, print:
"Dividing by zero is not supported".

Hint: use the '?' operator. You can define the function in one line.
*/
void exercise_4(int x)
{
    std::string result = (x!=0) ? "10 divided by " + std::to_string(x) + " is " + std::to_string(10/x) : "Dividing by zero is not supported";
    std::cout<<result<<std::endl;
}

/*
Predict the value of each expression in the print statements below by following the operations performed on the variables x,y and z.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/
void exercise_5()
{
    // Write your answers here
    int answer1 = 10;
    int answer2 = 40;
    int answer3 = 4;
    int answer4 = 4;
    int answer5 = true;

    int x, y, z;
    x = 2;
    x *= 3 + 2;

    // The print statements below will print 1 if your answers are correct
    std::cout << (answer1 == x) << std::endl;

    x *= y = z = 4;
    std::cout << (answer2 == x) << std::endl;
    std::cout << (answer3 == y) << std::endl;
    std::cout << (answer4 == z) << std::endl;

    x = y == z;
    std::cout << (answer5 == x) << std::endl;
}

/*
Predict the value of each expression in the print statements below by following the operations performed on the variables x,y and z.
Use a reference table for operator precedence if you are not sure about the order of operations.
*/
void exercise_6()
{
    // Write your answers here
    int answer1 = 3;
    int answer2 = 2;
    int answer3 = 4;

    int x, y, z;
    x = y = z = 1;
    x += y += x;

    // The print statements below will print 1 if your answers are correct
    std::cout << (answer1 == ((x < y) ? y : x)) << std::endl;
    std::cout << (answer2 == ((x < y) ? x++ : y++)) << std::endl;
    std::cout << (answer3 == ++y) << std::endl;
}