//Find the biggest of three numbers
#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter the number1:");
   scanf("%d",&a);
    printf("enter the number1:");
      scanf("%d",&b);
     printf("enter the number1:");
       scanf("%d",&c);
     if((a>b)&&(a>c))
       printf("a is big");
    else if((b>a) && (b>c))
       printf("b is big");
     else
    printf("c is big");     
   
}
