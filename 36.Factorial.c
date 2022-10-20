//Find a factorial of a given number
#include <stdio.h>
int main()
{
  int n,s=1,c=1;
  printf("Enter the number:");
  scanf("%d",&n);
  
  while(n>=c){
      s=s*c;
      c=c+1;
  }
  printf("%d",s);
}
