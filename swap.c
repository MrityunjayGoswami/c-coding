#include<stdio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("sum is %d%d",a,b);
}
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
