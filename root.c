#include<stdio.h>
#include<math.h>
void main()
{
double a,b,c,discriminant,root1,root2,realpart,imagpart;
printf("enter coefficients a,b,c");
scanf("%lf%lf%lf",&a,&b,&c);
discriminant=b*b-4*a*c;
if(discriminant>0)
{
root1= (-b+sqrt(discriminant))/(2*a);
root2= (b+sqrt(discriminant))/2*a;
printf("root1 is= %.2lf and root2 is =%.2lf\n",root1,root2);
}
else if(discriminant==0)
{
root1=root2=-b/(2*a);
printf("root1=root2=%.2lf\n",root1);
}
else
{
realpart=-b/(2*a);
imagpart=sqrt(discriminant)/(2*a);
printf("root1 =%.2lf and root2 =%.2lf\n",realpart,imagpart);
}
}
