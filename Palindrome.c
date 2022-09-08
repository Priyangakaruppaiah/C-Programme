//Find a given number is Palindrome or not
#include<stdio.h>
main()
{
  int n,r,s=0,copy=0;
  printf("Enter the number:");
  scanf("%d",&n);
  copy=n;
  while(0<n)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  if(copy==s)
    printf("Palindrome Number");
  else
    printf("Not a Palindrome Number");
}
     
    
    
