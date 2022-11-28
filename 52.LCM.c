//LCM in given two numbers
#include <stdio.h>
int main()
{
    int n1,n2,c,gcd=1,m1;
    printf("Enter the number:");
    scanf("%d %d",&n1,&n2);
    for(c=1;c<=n1 && c<=n2;c++){
        if(n1%c==0 && n2%c==0){
            gcd=c;
        }
    }
    m1=(n1*n2)/gcd;
    printf("LCM is %d",m1);
}
/*
OUTPUT:
Enter the number:34
78
 LCM is 1326

*/
