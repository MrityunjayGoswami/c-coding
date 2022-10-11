#include<stdio.h>
void main()
{
int a[10],i,sum=0;
float avg;

for(i=0;i<=9;i++)
{
printf("enter number %d:-",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<=9;i++)
{
sum=sum+a[i];
}
avg=sum/10;
printf("avarage is %f",avg);
}
