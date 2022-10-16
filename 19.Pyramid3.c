//Pyramid
#include <stdio.h>
int main()
{
   int rows,i,j,space,k;
   printf("Enter the number:");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++){
       k=0;
       for(space=1;space<=rows-i;space++){
           printf(" ");
       }
       while(k!=2*i-1){
           printf("*");
           k++;
       }
       printf("\n");
   }
}

/* OUTPUT
Enter the rows:5
         *
        *  *
      *   *  *
   *   *   *  *  
 *    *  *   *   *  
