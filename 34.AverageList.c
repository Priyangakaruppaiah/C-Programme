//Find the average in given list
#include <stdio.h>
int main()
{
  int a[10],n,i,s;
  float avg;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0,s=0;i<n;i++){
      s=s+a[i];
   }
  avg=(float)s/n;
  printf("%f",avg);
  
}

