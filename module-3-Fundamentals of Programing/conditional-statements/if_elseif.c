#include <stdio.h>
/*
if else if :if is executed when conditions is true else if is executed when check multiple true conditions if condition false else is execued 

syntax 
if(condition)
{
statements;
}
else if(condition)
{
statements;
}
else if(condition)
{
statements;
}
else 
{
statements;
}
*/

int main()
{
int a=90,b=90;
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
