//First and last letter in uppercase in word
#include<conio.h>
#include <ctype.h>
#include<string.h>
#include<stdio.h>
int main() 
{
   int i;
   int length = 0;
   char str[20];
   gets(str);
   length = strlen(str);
   for(i=0;i<length;i++)
   {
      if(i==0||i==(length-1)) 
      {
          str[i]=toupper(str[i]);
      }
      else if(str[i]==' ')
      {
          str[i-1]=toupper(str[i-1]);
          str[i+1]=toupper(str[i+1]);
      }
  }
 printf("String after capitalizing first and last letter of each word:\n%s", str);
  return 0;
 
}
