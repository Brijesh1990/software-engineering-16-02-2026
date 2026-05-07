#include<stdio.h>
#include<string.h>

int main()
{
  char str1[]="Mango";
  char str2[]="Mango";
  
 //compare the string via function 
 if(strcmp(str1,str2)==0) 
 {
   printf("string is same");	
 } 
 else 
 {
 	printf("string is not same");
 }
  
  return 0;	
}
