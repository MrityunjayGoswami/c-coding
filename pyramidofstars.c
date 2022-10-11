#include<stdio.h>
void main()
{
int x,y,z,i,n,o;

printf("enter the three digit numeber");
scanf("%d",&n);

z=n%10;
o=n/10;
y=o%10;
x=o/10;

for(i=0;i<x;i++)
{
printf("*");
}
printf("\n");
for(i=0;i<y;i++)
{
printf("*");
}
printf("\n");
for(i=0;i<z;i++)
{
printf("*");
}
printf("\n");
}
