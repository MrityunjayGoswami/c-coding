#include<stdio.h>
void main()
{
int n,sum=0;
printf("\nenter number between 0 to 9999:\t");
scanf("%d",&n);
if(n>9999||n<0)
printf("you entered wrong number, shi number daalo\n");
else
{
while(n!=0)
{
sum =sum+(n%10);
n=n/10;
}
printf("sum of digits is: %d\n",sum);
}
}
