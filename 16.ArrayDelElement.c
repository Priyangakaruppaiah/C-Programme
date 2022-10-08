//C program to delete an element in array
#include <stdio.h>
void insert(int a[20],int index,int n){
    int i;
    for(i=index;i<n-1;i++)
           a[i]=a[i+1];
           
    n--;
   
    displ(n,a);
}
int displ(int n,int a[]){
    int i;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}

int main()
{
    int a[20],i,n,index;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position:");
     scanf("%d",&index);
    
     insert(a,index,n);
    
}    
    

