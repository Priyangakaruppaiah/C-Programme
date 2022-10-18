//Insertion sort in c
#include<stdio.h>
int main()
{
  int n,a[200],i,c,key,d,copy;    
  printf("Enter the elements:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
 
 for(c=1;c<n;c++){
      copy=a[c];
      d=c-1;
      while(d>=0 && a[d]>copy){
          a[d+1]=a[d];
          d=d-1;
          a[d+1]=copy;
        
      }
   }
    for(i=0;i<n;i++)
         printf("%d",a[i]);

}



