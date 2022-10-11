# include <stdio.h>
void main( )
{
int qty = 5;
int *ptr;
ptr = &qty;

printf ("Address of qty = %p \n", &qty);
printf ("Address of qty = %p \n", ptr);
printf ("Address of ptr = %p \n", &ptr);
printf ("Value of ptr = %p \n", ptr);
printf ("Value of qty = %d \n", qty);
printf ("Value of qty = %d \n", *(&qty));
printf ("Value of qty = %d\n", *ptr);
}
