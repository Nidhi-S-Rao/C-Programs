

//Program to convert decimal to binary
void decimalToBinary(int n){
    int a[15],i;
 for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\nDecimal number is =");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
}

//Program to convert binary to decimal
void BinaryToDecimal(int n){

  int number= 0, i=0, r;

  while (n != 0) {
    r = n % 10;
    number = number+ r * pow(2, i);
    n = n/10;
    i++;
  }
  printf("\nBinary number = %d\n",number);
}

//Fibonacci series
void fibonacci(int n) {

  int i;

  int t1 = 0, t2 = 1;
  int t3 = t1 + t2;
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  for (i = 3; i <= n; ++i) {
    printf("%d ", t3);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }

}

//Print * as Pyramid
void printStars(int n)
{
   int i,j;
   printf("\n");
   for(i=1;i<=n;i++)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
}

//Print * as reverse Pyramid
void printStarsReverse(int n)
{
   int i,j;
   printf("\n");
   for(i=n;i>=1;i--)
   {
	for(j=1;j<=i;j++)
	   printf("*");
	printf("\n");
   }
}

//Program to find sum of digits in a number
void sumOfDigits(int num){
    int sum=0;
    while(num>0){
        sum=sum+num%10;
        num=num/10;
    }
    printf("%d\n",sum);
}


//Factorial of a number
int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
