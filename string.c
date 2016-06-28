#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
   char a[50];
   clrscr();
   printf("Enter a string:");
   scanf("%s",a);
   strrev(a);
   printf("\nReversed string is: %s",a);
   getch();
}
