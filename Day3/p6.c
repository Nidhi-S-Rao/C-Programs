#include<stdio.h>
#include<stdlib.h>
int a,b;
int power(int a,int b);
int main(){
printf("Enter the base number:\n");
scanf("%d",&a);
printf("Enter the exponent:\n");
scanf("%d",&b);
printf("%d\n",power(a,b));
return 0;
}

int power(int a,int b)
{
if(b>=1){
return a*power(a,b-1);
}
else
return 1;
}

