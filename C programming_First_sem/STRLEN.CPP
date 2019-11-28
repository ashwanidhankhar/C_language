#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[50],b;
puts("enter the string to know length :");
gets(a);
b=strlen(a);
printf(" the length of the string is:  %d",b);
getch();
}