//Selection sort in c
#include <stdio.h>
int main()
{
  int n,a[200],i,position,swap,j;    
  printf("Enter the elemens:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
 
  for(i=0;i<n-1;i++){
      position=i;
      for(j=i+1;j<n;j++){
          if(a[position]>a[j])
          position =j;
      }
      if(position!=i){
          swap=a[i];
          a[i]=a[position];
          a[position]=swap;
      }
      
          
  } 
  printf("Sorted arraay");
  for(i=0;i<n;i++){
      printf("%d",a[i]);
  }

}




