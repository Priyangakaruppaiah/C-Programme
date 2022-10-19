//Find the number is armstrong number or not
#include <stdio.h>
int main()
{
    int n,r,copy,s=0;
    printf("Enter the number");
    scanf("%d",&n);
    copy=n;
    while(n>0){
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(s==copy){
        printf("Number is armstrong number");
    }
    else{
        printf("Number is not a armstrong number"); 
    }
}
