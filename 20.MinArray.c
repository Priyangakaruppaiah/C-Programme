//Find the minimum value in array
#include <stdio.h>
int main()
{
   int a[20],i,m,c,n;
   printf("Enter the elements:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   m=a[0];
   c=1;
   while(c<n){
       if(m>a[c]){
           m=a[c];
       }
       c=c+1;
   }   
 printf("min is %d",m);
}

