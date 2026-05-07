#include <stdio.h>

int a=10;
void myFunction()
{
//global call a values
printf("%d\n",a);
} 
int main()
{
	
myFunction();
myFunction();
return 0;
}
