#include<stdio.h>
#include<conio.h>
int add(int num1, int num2);
int multiply(int num1 , int num2);
int subtract(int num1, int num3);
int divide(int num1 , int num3);

int main()
{
clrscr();
int a,b,result,result1,result2,result3;
printf("enter two number :");
scanf("%d%d",&a,&b);

result=add(a,b);
result1=subtract(a,b);
result2=multiply(a,b);
result3=divide(a,b);

printf("Sum of two numbers is : %d \n",result);
printf("subrtaction of two numbers is : %d \n",result1);
printf("multiplication of two numbers is : %d \n",result2);
printf("division of two numbers is : %d \n",result3);
return 0;
getch();
}

int add(int num1,int num2){
int result;
result = num1+num2;
return result;
}
int subtract(int num1, int num2){
int result1;
result1= num1-num2;
return result1;
}
int multiply(int num1, int num2){
int result2;
result2= num1*num2;
return result2;
}

int divide(int num1, int num2){
int result3;
result3= num1/num2;
return result3;
}