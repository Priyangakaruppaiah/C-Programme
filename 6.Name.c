//Print your name in n times
#include <stdio.h>
int main(){
  int a=0,n;
  printf("Enter the number:");
  scanf("%d",&n);
  do{
      printf("Name \n");
      a=a+1;
   }while(a<n);
}
