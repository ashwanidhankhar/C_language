#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100];
clrscr();
printf("enter the first string : ");
gets(a);
printf("enter the second string : ");
gets(b);
if(strcmp(a,b)==0)
{
printf(" the string is equal ");
}
else
{
printf("the strings are not equal");
}
getch();
}