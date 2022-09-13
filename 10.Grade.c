//C program to find the grade in mark.
#include <stdio.h>
int main()
{   int n;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n>0 && n<=49)
        printf("You are not pass and U grade");
    else if(n>=50 && n<=59)
        printf("You are pass and B grade");
    else if(n>=60 && n<=69)
        printf("You are pass and B+ grade");
    else if(n>=70 && n<=79)
        printf("You are pass and  A grade");
    else if(n>=80 && n<=89)
        printf("You arepass and A+ grade");
    else if(n>=90 && n<=100)
        printf("You are pass and O grade");
    else
        printf("Your mark is not valid");
 }
