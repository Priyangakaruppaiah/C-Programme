//Find BMI
#include <stdio.h>
int main()
{
  float BMI,height,weight;
  printf("Enter the number:");
  scanf("%f %f",&height,&weight);
  BMI=weight/(height*height);
  if(BMI<18.5)
      printf("It is underweight");
  else if(18.5<=BMI && BMI>=24.9)
      printf("it is normal weight");
  else if(25<=BMI && BMI>=29.9)
      printf("it is overweight");
  else{
      printf("OBASE");
  }
}
