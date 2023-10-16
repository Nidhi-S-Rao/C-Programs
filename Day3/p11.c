#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int option, n,m;


int main(){
printf("Enter the option:1.Square root, 2.Natural Log, 3.log 10, 4.power, 5.Cos(x)\n");
scanf("%d",&option);
switch(option){
case 1:
printf("Enter the number\n");
scanf("%d",&n);
printf("%f\n",sqrt(n));
break;

case 2:
printf("Enter the number\n");
scanf("%d",&n);
printf("%f\n",log(n));
break;

case 3:
printf("Enter the number\n");
scanf("%d",&n);
printf("%f\n",log10(n));
break;

case 4:
printf("Enter the number\n");
scanf("%d%d",&n,&m);
printf("%f\n",pow(n,m));
break;

case 5:
printf("Enter the number\n");
scanf("%d",&n);
printf("%f\n",cos(n));
break;

default:
printf("Wrong option selected\n");

}
return 0;
}
