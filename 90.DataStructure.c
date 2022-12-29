//C Program to Store Data in Structures Dynamically
#include <stdio.h>
#include <stdlib.h>
struct course {
  int marks;
  char subject[30];
};
int main() {
  struct course *ptr;
  int noOfRecords;
  printf("Enter the number of records: ");
  scanf("%d", &noOfRecords);
  
  ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
  for (int i = 0; i < noOfRecords; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < noOfRecords; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
  }

  free(ptr);

  return 0;
}
/*
OUTPUT:
Enter the number of records: 4
Enter subject and marks:
Maths
90
Enter subject and marks:
Science
99
Enter subject and marks:
Tamil
98
Enter subject and marks:
English
89
Displaying Information:
Maths   90
Science 99
Tamil   98
English 89
/*
