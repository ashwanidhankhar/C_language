#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int i;
clrscr();
printf("enter your string");
gets(s);
for(i=0;s[i]!='\0';i++);
printf("length of string is %d",i);
getch();
}