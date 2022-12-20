//C Program to Find Largest Number Using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);
  data = (double *)calloc(n, sizeof(double));
  if (data == NULL) {
    printf("Error!!! memory not allocated.");
    exit(0);
  }
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", data + i);
  }
  for (int i = 1; i < n; ++i) {
    if (*data < *(data + i)) {
      *data = *(data + i);
    }
  }
  printf("Largest number = %.2lf", *data);

  free(data);

  return 0;
}
/*
OUTPUT:
Enter the total number of elements: 6
Enter number1: 67
Enter number2: 3
Enter number3: 7
Enter number4: 60
Enter number5: 236
Enter number6: 789
Largest number = 789.00
*/
