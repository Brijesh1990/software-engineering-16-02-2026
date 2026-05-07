#include<stdio.h>

int main()
{
//create calculation when user input ?
// 1. additions 
// 2. substractions 
// 3. multiplecations
// 4. exit()
int a,b,c,result;
printf("Enter a values :");
scanf("\n%d",&a);

printf("Enter b values :");
scanf("\n%d",&b);

printf("Select a Number to performed action :");
scanf("\n%d",&result);

//check condition 
if(result==1)
{
	c=a+b;
	printf("Additions of numbers is :%d",c);
}
else if(result==2)
{
c=a-b;
printf("Substractions of numbers is :%d",c);	
}
else if(result==3)
{
c=a*b;
printf("Multiplications of numbers is :%d",c);	
}
else 
{
printf("You select wrong Numbers");
}

return 0;	


}
