#include <stdio.h>
/*
definition:
nested if  :if within another if that is called nested if 
syntax :
if(condition)
{
 if(condition)
 {
  statements;
 }
}
else 
{
statements;
}

*/
int main()
{
//declare variables for check conditions
int a=25, b=15;
if(a>b)
{
  if(a!=0 && b!=0)
  {
    printf("a is greter than b and both are positive numbers");
  }	

} 
else 
{
printf("a is less than b");	
}
return 0; 	
}
