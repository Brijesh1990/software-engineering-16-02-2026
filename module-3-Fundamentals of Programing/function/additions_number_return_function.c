#include <stdio.h>

int addFunction(int a, int b)
{
	return a+b; //function terminated here
}
int subsFunction(int a, int b)
{
	return a-b; //function terminated here
}
int multFunction(int a, int b)
{
	return a*b; //function terminated here
}

//call function

int main()
{
 printf("%d\n",addFunction(10,20));
 printf("%d\n",subsFunction(40,20));
 printf("%d\n",multFunction(20,20));
 return 0;	
}
