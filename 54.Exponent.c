#include <stdio.h>
int main()
{   
    int a,b;
    float result=1.0;
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the exponent:");
    scanf("%d",&b);
    while (b!= 0) {
        result *= a;
        --b;
    }
    printf("Answer = %f", result);
    return 0;
}

/*
OUTPUT:
Enter the base:3
Enter the exponent:2
Answer = 9.000000

*/
