#include<stdio.h>
void main()
{
int i,n,rem,flag=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
rem=n%i;
if(rem==0)
{
flag=1;
break;
}
}
if(n==1)
printf("niether prime nor not prime");
else
{
 if(flag==0)
 printf("number is prime");
 else
 printf("number is not prime");
}
}
