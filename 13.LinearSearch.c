//Find the search element is exist or not
#include <stdio.h>
int main()
{    
    int n,a[123],i,n1;
    int s=0;
    printf("enter number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number");
    scanf("%d",&n1);
    for(i=0;i<n;i++){
        if(n1==a[i]){
            s=1;
        }
    }
    if(s==1)
      printf("search element exist");
    else
      printf("not exist");
}
