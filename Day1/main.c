#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "day1.h"


int main()
{
    //Program 1 to convert upper case to lower case
    assert(upperToLower('A')=='a');
    //assert(upperToLower('B')=='c');


    //Program 2 to calculate area of circle
    assert(areaOfCircle(4)==50);
    //assert(areaOfCircle(5)==50);


    //Program 3 to calculate number of char between 2 characters
    assert(numberOFChars('A','E')==3);
    //assert(numberOFChars('A','E')==4);

    //Program 4 to convert Celsius to Fahrenheit
    celsiusToFahrenheit(32);

    //Program 5 to check if number is even or odd
    evenOrOdd(106);

    //Program 6 to check leap year
    leapYear(2020);

    //Program 7 to get 2^N using left shift operator
    assert(shiftOperator(2)==4);

    //Program to check if input is a number or character
    DigitOrChar('4');
    DigitOrChar('b');

    //Program to generate two random numbers and find its sum
    sumOfRandomNumbers();


}
