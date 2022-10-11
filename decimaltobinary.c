#include<stdio.h>
void main()
{
int i,n,a[10];
printf("\n program to convert decimal to binary:\n enter the number:");
scanf("%d",&n);

for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\n binary of no. is:");
for(i=i-1;i>=0;i--)
printf("%d",a[i]);
printf("\n");
}
