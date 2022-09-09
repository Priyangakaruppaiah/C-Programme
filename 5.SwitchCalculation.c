//find the given number using addition,subtraction,multiplication and division
#include <stdio.h>
int main()
{
    int a,b,c,d;
printf("1.addition \n 2.subtraction \n 3.multiplication \n 4.division");
printf(" \n enter the number a and b:");
scanf("%d %d",&a,&b);
printf("Your choice is:");
scanf("%d",&d);
switch(d){
      case 1:c=a+b;
      printf(" addition is %d",c);
      break;
      case 2:c=a-b;
      printf(" subtraction is %d",c);
      break;
      case 3:c=a*b;
      printf(" multiplication is %d",c);
      break;
      case 4:c=a/b;
      printf(" division is %d",c);
      break;
}
}
