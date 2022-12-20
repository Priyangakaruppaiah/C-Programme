//C Program to Remove all Characters in a String Except Alphabets
#include <stdio.h>
int main() {
   char line[150];
   
   printf("Enter a string: ");
   fgets(line, sizeof(line), stdin); // take input

    for (int i = 0, j; line[i] != '\0'; ++i) {
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {
             line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);
   return 0;
}
/*
OUTPUT:
Enter a string: where2 are34 you6987 going375
Output String: whereareyougoing
/*

