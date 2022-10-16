//ArrayRotate in c
#include <stdio.h>
int main()
{
   int a[34],n,i,j,k,x,temp;
   printf("Enter the number:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
    printf("Enter the rotate:");
    scanf("%d",&k);
    for(i=0;i<k;i++){
       x=a[0];
       for(j=0;j<n;j++){
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
       }
       a[n-1]=x;
   }
   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }
   
}


