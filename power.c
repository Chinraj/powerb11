#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b,e,r;
clrscr();
printf("enter the base number :");
scanf("%d",&b);
printf("Enter the exponent number :");
scanf("%d",&e);
r=pow(b,e);
printf(" result is :%d\n",r);
getch();
}
