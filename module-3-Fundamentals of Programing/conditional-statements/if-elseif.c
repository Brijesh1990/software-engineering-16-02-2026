#include <stdio.h>
/*
definition:
if else if :if is executed when condition is true else if is check multiple true conditions if else if is false else is executed 
syntax  :
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
//declare variables for check conditions
int a=25, b=25;
if(a>b)
{
printf("a is greter than b");
} 
else if(b>a)
{
printf("b is greater than a");	
}
else 
{
printf("a and b both are equal");	
}
return 0; 	
}
