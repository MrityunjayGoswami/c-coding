//function type that, take nothing return something

#include<stdio.h>

void main()
{
int add();

int s;
s=add();
printf("sum is %d",s);
}

int add()
{
int x,y,c;
printf("enter two numbers");
scanf("%d%d",&x,&y);
return(x+y);
}

