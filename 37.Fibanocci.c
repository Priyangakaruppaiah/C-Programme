//Write a program in fibanocci series
#include <stdio.h>
int main()
{
   int a=0,b=1,c=0,n,d=0;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("%d",a);
    printf("%d",b);
    while(c<(n-2)){
        c=a+b;
        printf("%d",c);
        printf(" ");
        a=b;
        b=c;
        d=d+1;
    }
   
}

