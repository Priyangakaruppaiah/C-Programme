//Write a c program to write addition of two numbers without addition operator
#include <stdio.h>

int main()
{
   int a,b,c,d;
   printf("Enter the number a and b:");
   scanf("%d %d",&a,&b);
   for(c=0,d=0;a>=c;c++){
       d=b++;
   }
   printf("%d",d);
}
