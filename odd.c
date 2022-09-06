//find odd number between n1 to n2
#include<stdio.h>
main()
{
   int n1,n2,c;
   printf("Enter the number n1:");
   scanf("%d",&n1);
   printf("Enter the number n2:");
   scanf("%d",&n2);
   for(c=n1;c<=n2;c++)
   {
      if(c%2==1)
      {
         printf("%d \n",c);
       }
    }
 }   
