#include <stdio.h>
int main()
{
int n1,n2,n3;
printf("Enter N1 values :");
scanf("%d",&n1);
printf("Enter N2 values :");
scanf("%d",&n2);
printf("Enter N3 values :");
scanf("%d",&n3);

//check conditions
if(n1>n2 && n1>n3)
{
printf("N1 is max Numbers");	
}
else if(n2>n1 && n2>n3)
{
printf("N2 is max numbers");
}
else if(n3>n1 && n3>n2)
{
printf("N3 is max Numbers");
}
else 
{
  printf("something went wrong while check conditions");	
}
return 0;
}
