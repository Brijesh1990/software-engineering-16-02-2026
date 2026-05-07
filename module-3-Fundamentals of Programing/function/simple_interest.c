#include<stdio.h>
int main()
{
   
   float p,n,r,si;
   printf("Enter principle ammount");
   scanf("\n%f",&p);
   printf("Enter Numbers of years");
   scanf("\n%f",&n);
   printf("Enter ROI ");
   scanf("\n%f",&r);
    //formula of simple interest
   si=p*n*r/100;  
   printf("Simple interest you have to paid is :%f",si);
   return 0;
}
