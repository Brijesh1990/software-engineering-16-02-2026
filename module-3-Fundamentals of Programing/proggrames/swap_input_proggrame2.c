#include <stdio.h>
int main()
{
int a,b,temp;
printf("Enter a values :");
scanf("%d",&a);

printf("Enter b values :");
scanf("%d",&b);

// swap with third   variables 
// a=10, b=20;
// temp=10
// a=20;
// b=10  
temp=a; 
a=b;
b=temp;

printf("after swap a is : %d and swap b values is %d",a,b);
return 0; 

}
