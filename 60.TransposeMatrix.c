// 
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
/*
OUTPUT:
Enter rows and columns: 4
3

Enter matrix elements:
Enter element a11: 1
Enter element a12: 9
Enter element a13: 2
Enter element a21: 8
Enter element a22: 3
Enter element a23: 7
Enter element a31: 4
Enter element a32: 6
Enter element a33: 5
Enter element a41: 0
Enter element a42: 1
Enter element a43: 9

Entered matrix: 
1  9  2  
8  3  7  
4  6  5  
0  1  9  

Transpose of the matrix:
1  8  4  0  
9  3  6  1  
2  7  5  9  
*/
