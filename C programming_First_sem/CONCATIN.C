#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char s1[100],s2[100],i,j;
clrscr();
printf("enter first string :");
scanf("%s",&s1);

printf("enter the second string : ");
scanf("%s",&s2);

for(i=0;s1[i] !='\0';++i);

for(j=0;s2[j] != '\0';++j,++i)
{
s1[i] += s2[j];
}
s1[i] ='\0';
printf("after concatenation the : %s",s1);

getch();
}