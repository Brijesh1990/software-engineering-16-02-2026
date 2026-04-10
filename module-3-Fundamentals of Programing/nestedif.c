#include <stdio.h>
//nestedif : if within another if i.e called nested if 
/*
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
int n;
printf("Enter a numbers  :");
scanf("%d",&n);
//check via nestedif 
if(n==1)
{
	if(n>=0)
	{
		printf("Number is postive");
	}	
}
else 
{
	printf("Number is Negative");
}

return 0;
	
}
