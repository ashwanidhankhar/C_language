#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,c,d,first[10][10],second[10][10],sub[10][10];
clrscr();
printf(" enter number of rows and columns of matrix ");
scanf("%d%d",&m,&n);
printf("enter elements of first matrix");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&first[c][d]);
printf(" enter the elements of second matrix");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&second[c][d]);
printf("subtraction of the two matrix is :");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
sub[c][d]=first[c][d]-second[c][d];
printf("%d \t",sub[c][d]);
}
}
printf("\n");
getch();
}