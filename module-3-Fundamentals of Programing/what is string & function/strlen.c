#include<stdio.h>
#include<string.h>

int main()
{
  //string as array memory stores in name[]
  char name[20]="rajkumarrao";
  //strlen(name);
  printf("%s\n",name);
  printf("%zu\n",strlen(name));
  return 0;	
}
