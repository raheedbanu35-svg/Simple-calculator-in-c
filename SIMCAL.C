#include<stdio.h>
int main()
{
int a,b;
char op;
clrscr();
printf("Enter first number:");
scanf("%d",&a);
printf("Enter an operator(+,-,*,/):");
scanf(" %c",&op);
printf("Enter second number:");
scanf("%d",&b);
switch(op)
{
case'+':
printf("result=%d",a+b);
break;
case'-':
printf("result=%d",a-b);
break;
case'*':
printf("result=%d",a*b);
break;
case'/':
if(b!=0)
printf("result=%d",a/b);
else
printf("cannot divide by zero!");
break;
default:
printf("Invalid operator !");
}
return 0;
}
