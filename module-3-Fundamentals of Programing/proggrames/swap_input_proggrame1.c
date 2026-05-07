#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter a values :");
	scanf("%d",&a);
	
	printf("Enter b values :");
	scanf("%d",&b);
	
   //swap without third variables 
   //a=10; b=20
   a=a+b; // 30
   b=a-b; // 10
   a=a-b; // 20
   printf("after swap a is : %d and swap b values is %d",a,b);
   return 0; 
   	
}
