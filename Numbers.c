#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter the value of a: ");
 scanf("%d",&a);
 printf("\nEnter the value of b: ");
 scanf("%d",&b);
 printf("\nBefore swapping the values of a and b\n");
 printf("a=%d \nb=%d",a,b);
 a=a^b;
 b=a^b;
 a=a^b;
 printf("\nThe value of a and b after swapping\na=%d \nb=%d",a,b);
 getch();
}
