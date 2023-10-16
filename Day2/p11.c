#include<stdio.h>
#include<stdio.h>


int main()
{
int n,sum=0;
printf("Units:");
scanf("%d",&n);
if(n>=200){
int k=n-200;
sum=sum+(n-k)*5;
n=n-200;
}
if(n>=100)
{
int l=n-100;
sum=sum+(n-l)*7;
n=n-100;
}
if(n>0)
sum=sum+n*10;
printf("%d\n",sum);
return 0;
}

