#include <stdio.h>
int main()
{
   int low,high,n,a[20],search,mid,i;
   printf("No.of elements");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
    printf("search elements");
   scanf("%d",&search);
   low=0;
   high=n-1;
   mid=(low+high)/2;
   while(low<=high){
       if(a[mid]<search)
           low=mid+1;
        else if(a[mid]==search){
            printf("found");
            break;
        }
        else
            high=mid-1;
    mid=(low+high)/2;    
            
   }
    if(low>high)
      printf("not present");
    
 }
/*
OUTPUT:
o.of elements5
1
2
3
4
5
search elements1
found
*/

