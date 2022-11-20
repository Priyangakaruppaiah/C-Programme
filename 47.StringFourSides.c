// Print the string in four sides
#include<string.h>
#include<stdio.h>
void main(){
     char s[20],s1[20][20];
     int i,j,n;
    
     scanf("%s",s);
     n=strlen(s);
     for(i=0;i<n;i++){
	  for(j=0;j<n;j++)
	      s1[i][j]=' ';
     }
     for(i=0;i<n;i++){
	  if(i==0){
	      s1[0][0]=s[i];
	      s1[n-1][n-1]=s[i];
	  }
	  else if(i==n-1){
	      s1[0][n-1]=s[i];
	      s1[n-1][0]=s[i];
	  }
	  else{
	      s1[0][i]=s[i];
	      s1[i][0]=s[i];
	      s1[n-i-1][n-1]=s[i];
	      s1[n-1][n-i-1]=s[i];
	  }
     }
     for(i=0;i<n;i++){
	  for(j=0;j<n;j++)
	      printf("%c",s1[i][j]);
	  printf("\n");
     }
    
}
