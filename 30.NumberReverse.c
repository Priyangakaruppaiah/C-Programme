//Reverse a given number
#include <stdio.h>
int main()
{
    int n,r,copy,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    
    while(n>0){
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    printf("%d",s);
   
}
