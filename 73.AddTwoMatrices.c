//C Program to Add Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
/*
OUTPUT:
Enter the number of rows (between 1 and 100): 3
Enter the number of columns (between 1 and 100): 4

Enter elements of 1st matrix:
Enter element a11: 3
Enter element a12: 8
Enter element a13: 4
Enter element a14: 6
Enter element a21: 9
Enter element a22: 1
Enter element a23: 2
Enter element a24: 0
Enter element a31: 4
Enter element a32: 7
Enter element a33: 9
Enter element a34: 2
Enter elements of 2nd matrix:
Enter element b11: 3
Enter element b12: 4
Enter element b13: 7
Enter element b14: 9
Enter element b21: 0
Enter element b22: 2
Enter element b23: 6
Enter element b24: 8
Enter element b31: 1
Enter element b32: 5
Enter element b33: 7
Enter element b34: 8

Sum of two matrices: 
6   12   11   15   

9   3   8   8   

5   12   16   10   

*/
