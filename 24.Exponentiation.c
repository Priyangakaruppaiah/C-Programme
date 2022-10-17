//Find exponentiation
#include <stdio.h>
int main()
{   
    int a,b,c,s;
    printf("Enter number");
    scanf("%d %d",&a,&b);
    c=0;
    s=1;
    while(c<b){
        s=s*a;
        c=c+1;
    }
    printf("Exponentiation is %d",s);
}
