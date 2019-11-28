#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int i,j,n=1;
printf(" enter the number");
scanf("%d",&i);
for(j=1;j<=i;j++)
{
n=j*n;
}
printf("factorial of %d is %d",i,n);
getch();
}