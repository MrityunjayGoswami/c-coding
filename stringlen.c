#include<stdio.h>
int main()
{
char s[100];
int c=0;

printf("input a string\n");
fgets(s,100,stdin);

while(s[c]!='\0')
c++;

printf("length of the string: %d\n",c-1);
return 0;
}
