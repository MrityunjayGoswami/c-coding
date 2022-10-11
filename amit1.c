#include<stdio.h>
#include<string.h>
void main()
{
int x,y;
static char string[]="AMIT";
printf("\n");
for(x=1;x<=4;x++)
{
y=x;
printf("%-4.*s\n",y,string);
}
for(x=3;x>=0;x--)
{
y=x+1;
printf("%-4.*s\n",y,string);
}
}
