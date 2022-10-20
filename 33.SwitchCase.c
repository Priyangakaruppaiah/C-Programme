//Switch case in addition,subtraction,multiplication and devision
#include <stdio.h>
int main()
{  
    int a,b,ch,c;
    printf("enter the number a:");
      scanf("%d",&a);
     printf("enter the number a:"); 
     scanf("%d",&b);
     printf("1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division\n");
     printf("You have to choose");
    scanf("%d",&ch);
   switch(ch){
        case 1:c=a+b;
              printf("Addition=%d",c);
              break;
         case 2:c=a-b;
              printf("Subtraction=%d",c);
              break;
          case 3:c=a*b;
              printf("Multiplication=%d",c);
              break; 
         case 4:c=a/b;
              printf("Division=%d",c);
              break; 
        default:
               printf("choose correct choice");      
   }
    
}

