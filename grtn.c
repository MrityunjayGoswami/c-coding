#include<stdio.h>
void main()
{
int n,i,num,large=0;
printf("how many numbers:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("enter number %d:\n",i);
scanf("%d",&num);
if(num>large)
large=num;
}
printf("greatest number is\n:%d",large);
}
