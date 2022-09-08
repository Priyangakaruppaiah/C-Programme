//find a number is prime or not
#include<stdio.h>
main()
{
  int c=1,s=0,n;
  printf("Enter the number");
  scanf("%d",&n);
  while(c<n)
  {
    if(n%c==0)
    {
      s=s+1;
    }
    c=c+1;
  }
  if(s==1)
    printf("Primme number");
  else
    printf("not prime number");
}
  
