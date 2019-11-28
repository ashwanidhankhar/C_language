#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a,b,marks[4][2];
for(a=0;a<=3;a++)
{
printf(" enter the roll no. and marks");
scanf("%d%d",&marks[a][0],&marks[a][1]);
}
for(b=0;b<=3;b++)
printf("\n %d \t %d ",marks[b][0],marks[a][1]);
getch();
}