#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[20],s2[20];
clrscr();
printf("enter the first string : ");
scanf("%s",&s1);
printf("enter the second string : ");
scanf("%s",&s2);
printf("After concantination the string is \n %s",strncat(s1,s2,2));
getch();
}