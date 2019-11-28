#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100];
clrscr();
printf("enter the string : ");
gets(a);
printf(" the reverse of the string is : %s",strrev(a));
getch();
}