#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool ageCheck;
   //take input
   printf("Enter your age :");
   scanf("%d",&ageCheck);
   //check conditions
   (ageCheck>=18) ? printf("i am adult"):printf("i am child");
   return 0;   
}
