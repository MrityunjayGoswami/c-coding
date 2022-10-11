#include<stdio.h>
void main()
{
long long int n;
int count=0,a[10],i=0;
printf("enter the number:");
scanf("%lld",&n);

while(n!=0)
{
a[i]=n%10;
n=n/10;
++count;
++i;
}
--i;
while(count!=0)
{
while(a[i]!=0)
{
printf("*");
--a[i];
}
--i;
--count;
printf("\n");
}
}
