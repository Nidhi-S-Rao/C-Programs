#include<stdio.h>
#include<stdlib.h>
#define concatenate(x,y) (x*10+y)

int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("%d\n",concatenate(a,b));
return 0;
}
