#include <stdio.h>

int main()
{
  char name[30];
 //print to ask user eneter  name
 printf("Enter your name :");
 //&name is stored the address of char name 
 scanf("%s", &name); 
// print the name 
 printf("your name is :%s",name); 
 return 0;
}
