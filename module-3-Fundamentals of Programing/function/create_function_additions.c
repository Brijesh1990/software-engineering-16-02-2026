#include<stdio.h>

//create a function or decalred a function
void addNumbers()
{
	int a,b,c;

	printf("Enter a values :");
	scanf("%d",&a);
	printf("Enter b values :");
	scanf("%d",&b);
	c=a+b;
	printf("Additions of numbers is %d ",c);
	
}
//call a function
int main()
{
	addNumbers();
	
	return 0;
}

