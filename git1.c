#include <stdio.h>
#include <stdlib.h>
 
void main()
{
 int n,r,c; 
 
 printf("Enter the number of rows : ");
 scanf("%d",&n);
 
 for(r=0;r<n;r++)
 {
  for(c=0;c<=r;c++) printf("*");
  printf("\n");
 }
}    

