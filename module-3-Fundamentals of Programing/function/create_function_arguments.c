#include<stdio.h>
void myFunction(int a, int b)
{
  int c=a+b;
  int d=a*b;
  int e=a/b;
  int f=a%b;
  
  printf("additions of numbers is : %d\n",c);	
  printf("multiplications of numbers is : %d\n",d);
  printf("divisions of numbers is : %d\n",e);
  printf("modulas of numbers is : %d\n",f);
}
//call a function 
int main()
{
	myFunction(100,20);
	return 0;
}
