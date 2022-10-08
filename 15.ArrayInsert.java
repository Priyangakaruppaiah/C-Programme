//C program to insert a element in array.
#include <stdio.h>
void insert(int a[20],int index,int element,int n){
    int i;
    n++;
    for(i=n-1;i>index;i--)
           a[i]=a[i-1];
           
    a[index]=element;
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
    int a[20],i,n,element,index;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position:");
     scanf("%d",&index);
    printf("Enter the elementr:");
     scanf("%d",&element);
     insert(a,index,element,n);
    
}    
    
