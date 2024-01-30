#include<stdio.h>    
int main()    
{    
 int n1=0;    
 int n2 = 1;
 int n3;
 int i;
 int num;
 printf("Enter the number of elements:");    
 scanf("%d",&num);    
 printf("\n%d %d",n1,n2);   
 for(i=2;i<num;++i)
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    