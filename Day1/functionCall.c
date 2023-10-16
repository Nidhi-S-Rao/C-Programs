#include<cType.h>

//Function to convert to upper case to lowercase
char upperToLower(char c){

    return tolower(c);
}


//Function to calculate area of cicrle
int areaOfCircle(int r){
    int area=3.14*r*r;
    return area;
}


//Function to count the number of chars between 2 alphabet
int numberOFChars(char a, char b){
    int d=b-a-1;
    return d;
}


//Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(int celsius){
float Fahrenheit=celsius*1.8+32;
printf("%f\n",Fahrenheit);
}


//Function to check if number is even or odd
int evenOrOdd(int n){
if(n%2==0)
    printf("Even\n");
else
    printf("Odd\n");
}

//Function to check if the year is leap year or not
int leapYear(int year){
if(year%400==0 || year %4==0 && year%100!=0){
    printf("Leap year\n");

}
else
    printf("Not a leap year\n");
}


//Function to calculate 2^N
int shiftOperator(int n){
    return 1<<n;
}

//Function to check if the input is a number or character
void DigitOrChar(char n){
    if(isdigit(n))
        printf("Number\n");
    else
        printf("Character\n");

}

//Function to generate two random numbers and find its sum
int sumOfRandomNumbers(){
    int a=rand();
    int b=rand();
    printf("Sum of 2 random integers = %d\n",a+b);
}
