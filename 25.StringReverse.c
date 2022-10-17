//Reverse a string
#include <stdio.h>
#include<string.h>
int main()
{  
int i,len,temp;    
   char str[50];
   printf("Enter the string:");
  scanf("%s",str);
   len=strlen(str);
   for(i=0;i<len/2;i++){
       temp=str[i];
       str[i]=str[len-i-1];
       str[len-i-1]=temp;
       
    }
   printf("After string reverse %s",str);
}
