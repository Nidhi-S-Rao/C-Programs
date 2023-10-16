#include<stdio.h>
#include<stdlib.h>
int n,l,b,h,r,r1,h,r2,h2;
int cube(int n);
int cuboid(int l,int b, int h);
int sphere(int r);
int cylinder(int r1, int h);
int cone(int r2,int h2);


int main(){
int option;
printf("Select the option 1.Cube 2.Cuboid 3.Sphere 4.Cylinder 5.Cone\n");
scanf("%d",&option);
switch(option){
case 1:
printf("Enter the length of the side\n");
scanf("%d",&n);
printf("%d\n",cube(n));
break;

case 2:
printf("Enter the length, breadth and height of the cuboid\n");
scanf("%d%d%d",&l,&b,&h);
printf("%d\n",cuboid(l,b,h));
break;


case 3:
printf("Enter the radius\n");
scanf("%d",&r);
printf("%d\n",sphere(r));
break;

case 4:
printf("Enter the radius and height\n");
scanf("%d%d",&r1,&h);
printf("%d\n",cylinder(r1,h));
break;

case 5:
printf("Enter the radius and height\n");
scanf("%d%d",&r2,&h2);
printf("%d\n",cone(r2,h2));
break;

default:printf("Entered wrong option\n");
}
return 0;
}


int cube(int n)
{
return n*n*n;
}
int cuboid(int l, int b, int h){
return l*b*h;
}
int sphere(int r)
{
 return (4/3)*3.14*r*r*r;
}
int cylinder(int r, int h)
{
return 3.14*r*r*h;
}

int cone(int r,int h)
{
return 3.14*r*r*(h/3);
} 




