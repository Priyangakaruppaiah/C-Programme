// Multiplication table in c
#include <stdio.h>
int main() {
  int n, i;
  printf("Enter the multiplication table: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", i, n, n * i);
  }
  return 0;
}
/*
OUTPUT:
Enter the multiplication table: 7
1 * 7 = 7 
2 * 7 = 14 
3 * 7 = 21 
4 * 7 = 28 
5 * 7 = 35 
6 * 7 = 42 
7 * 7 = 49 
8 * 7 = 56 
9 * 7 = 63 
10 * 7 = 70 

*/
