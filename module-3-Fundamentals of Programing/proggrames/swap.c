#include <stdio.h>
int main()
{
// w.a.p to swap 2 numbers without using third variables
int a=10,b=20;
printf("a vaules is%d\n",a);
printf("b values is%d\n",b);
//logic of swap
a=a+b;// 30
b=a-b;// 10
a=a-b;// 20
printf("after swap a values is :%d and after swap b values is %d",a,b);
return 0;
 	
}
