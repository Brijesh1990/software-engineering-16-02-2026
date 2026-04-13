#include <stdio.h>
int main()
{
int day;
printf("Enter your Numbers :");
scanf("%d",&day);
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

