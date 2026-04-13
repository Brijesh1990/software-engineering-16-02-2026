#include <stdio.h>
/*
def :
 switch is just like if else if condition is true case will be excuted if conditions is false default is executed
syntax :

switch(condition)
{
 case 1:
  statements;
  break;
 case 2:
  statements;
  break;
 case 3:
  statements;
  break;
 default:
  statements;
  break;   
}
*/

int main()
{
 int day=7;
 switch(day)
 {
  case 1:
  printf("Today is Monday");
  break;
  case 2:
  printf("Today is Tuesday");
  break;
  case 3:
  printf("Today is Wedenesday");
  break;
  case 4:
  printf("Today is Thursday");
  break;
  case 5:
  printf("Today is Frinday");
  break;
  case 6:
  printf("Today is Saturday");
  break;
  case 7:
  printf("Today is Sunday");
  break;
  default:
   printf("Your day is not found please input proper values");
   break;	
 }	
return 0;

}

