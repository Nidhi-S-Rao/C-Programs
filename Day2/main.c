#include <stdio.h>
#include <stdlib.h>
#include "header2.h"

int main()
{
    //Program to get the sum of digits in a 5 digit number
    sumOFDigits(12345);

    //Program to reverse the digits in a string
    reverseNumbers(12345);

    //Program to count the occurrences of a digit
    occurrencesOFDigit(12234522,2);

    //Program to check palindrome
    palindrome(123343321);

    //First N prime numbers
    primeNumbers(15);

    //Sum of the series
    sumOfSeries(4);

    //Armstrong number
    checkForArmstrong(153);

    //Menu driven function to find sum, difference and product
    int a, b, option;
    printf("Enter the two numbers to find sum,difference,product \n");
    scanf("%d%d",&a,&b);
    printf("Select an option: 1. Sum, 2. Difference and 3. Product ");
    scanf("%d",&option);
    menu(a,b,option);
}
