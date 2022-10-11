#include<stdio.h>

void main()
{
int sum(int a);
int n,k;
printf("enter the number");
scanf("%d",&n);
k=sum(n);
printf("sum is %d",k);
}

int sum(int a)
{

int s;
if(a==1)
return(a);
s=a+sum(a-1);
return(s);
}
