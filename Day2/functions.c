#include<stdio.h>
#include<stdlib.h>
#include<String.h>


//Program to get the sum of digits in a 5 digit number
void sumOFDigits(int num){
    int sum=0;
    while(num>0){
    sum=sum+num%10;
    num=num/10;
    }
    printf("%d\n",sum);
}

//Program to reverse a number
void reverseNumbers(int num){
    int reverse=0;
    while(num>0){
        reverse=reverse*10+num%10;
        num=num/10;
    }
    printf("%d\n",reverse);
}
//Program to count the occurrences of a digit
void occurrencesOFDigit(int num,int digit){
    int count=0;
    while(num>0){
            if(num%10==digit){
                count++;
            }
        num=num/10;
    }
    printf("%d\n",count);
}

//Program to check palindrome
void palindrome(int num){
    int reverse=0;
    int number=num;
    while(number>0){
        reverse=reverse*10+number%10;
        number=number/10;
    }
    if(num==reverse)
    printf("Palindrome\n");
    else
    printf("Not a Palindrome\n");

}

//Program to print N prime numbers
void primeNumbers(int n){
	 int count=1, flag, i=2, j;
	 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
}

//Sum of a series of 1's
void sumOfSeries(int n){
  int i, sum=0,k=1;
  for(i=1;i<=n;i++)
  {
     sum=sum+k;
     k=(k*10)+1;
  }
  printf("%d\n",sum);
}


//Armstrong number
void checkForArmstrong(int number) {
  int sum = 0, remainder, n=number;
  while (number >0) {
    remainder = number % 10;
    sum = sum + (remainder * remainder * remainder);
    number = number / 10;
  }
if(sum==n)
     printf("Armstrong number\n");
else
    printf("Not an Armstrong number\n");
}


//Menu driven program to get sum, difference and product of 2 numbers
void menu(int a, int b, int option){
int sum,diff,prod;
switch(option)
{
 case 1: {
 sum=a+b;
 printf("Sum = %d \n",sum);
  break;
 }

case 2: {
 diff=a-b;
 printf("Difference = %d\n",diff);
 break;
 }

case 3: {
 prod=a*b;
 printf("Product = %d \n",prod);
 break;
 }

default: printf("You have entered the wrong character");
}



}
