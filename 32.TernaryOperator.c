//Use a Ternary operator in biggest of three numbers
#include <stdio.h>
int main()
{
     int a,b,c;    
   printf("Enter the number");
   scanf("%d",&a);
    printf("Enter the number");
   scanf("%d",&b);
    printf("Enter the number");
   scanf("%d",&c);
   ((a<b)&&(c<b))? printf("b is big"):
   ((a<b)&&(c<b))? printf("b is big"):
   printf("c is big");
}
