//Find the greatest common divisor between two numbers
include <stdio.h>
int main()
{
    int n1,n2,c,gcd=1;
    printf("Enter the number:");
    scanf("%d %d",&n1,&n2);
    for(c=1;c<=n1 && c<=n2;c++){
        if(n1%c==0 && n2%c==0){
            gcd=c;
        }
    }
    printf("%d",gcd);
}

/*
OUTPUT:
Enter the number:6
9
3
*/
