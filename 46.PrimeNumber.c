#include <stdio.h>
int main()
{   
    int n,c,a[100],i=0,j;
    scanf("%d",&n);
    for(c=0;c<n;c++){
        scanf("%d",&a[c]);
    }
   
   
    for(i=0;i<n;i++){
        c=0;
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
               c=c+1;
            }
        }
        if(c!=0){
            printf("%d \n",a[i]);
        }
    }
}

/*
OUTPUT:
5
23
35
67
90
98
35 
90 
98 



*/
