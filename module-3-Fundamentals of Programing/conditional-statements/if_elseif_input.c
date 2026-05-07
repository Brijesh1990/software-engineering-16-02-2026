#include <stdio.h>
int main()
{
int a,b;
printf("Enter a values :");
scanf("%d",&a);
printf("Enter b values :");
scanf("%d",&b);
//check conditions
if(a>b)
{
printf("a is greter than b");	
}
else if(b>a)
{
printf("b is greter than a");
}
else 
{
printf("a and b both are equal");
}
return 0;
}
