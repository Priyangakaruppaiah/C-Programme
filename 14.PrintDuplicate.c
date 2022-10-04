//Print the duplicate elements in an array
#include <stdio.h>
int main()
{   
   int i,n,a[100],j;    
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   //len=sizeof(a)/sizeof(a[0]);
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(a[i]==a[j]){
                 printf("Duplicare elements are:%d \n",a[i]);
                 break;
           }     
       }
   }
   
}
