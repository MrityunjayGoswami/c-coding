#include<stdio.h>
int main()
{
char fname[20],mname[20],lname[20];
printf("enter full name\n");
scanf("%s%s%s",fname,mname,lname);
printf("\nabbreviated name: ");
printf("%c %c %s\n",fname[0],mname[0],lname);
return 0;

}
