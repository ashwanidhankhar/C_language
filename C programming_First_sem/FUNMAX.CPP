#include<stdio.h>
#include<conio.h>
int max(int num1,int num2);

int main()
{
clrscr();
int a,b,ret;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
ret=max(a,b);
printf("max value is %d",ret);
getch();
}
int max(int num1,int num2){
int result;
if(num1>num2)
result=num1;
else
result = num2;
return result;
}