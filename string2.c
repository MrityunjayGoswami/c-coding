#include<stdio.h>
#include<string.h>
void main()
{
char s[3][10];
int i;
printf("enter three string");
for(i=0;i<=2;i++)
scanf("%s",&s[i][0]);
for(i=0;i<=2;i++)
printf("%s\n",s[i]);
}
