//find the given character is alphabet or not
#include <stdio.h>
int main()
{   
    char ch1;
    printf("Enter the number:");
    scanf("%c",&ch1);
    if((ch1>='a' && ch1<='z') && (ch1>='a' && ch1<='z')){
          printf("%c is an alphabet.", ch1);
    }
    else{
         printf("%c is an alphabet.", ch1);
        
    }
}
/*
OUTPUT:
Enter the number:@
@ is an alphabet.

*/
