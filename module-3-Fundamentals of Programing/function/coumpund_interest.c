#include<stdio.h>
#include<math.h>

int main()
{
   
   float principle,r,ammount,time,ci;
   
   printf("Enter principle ammount");
   scanf("\n%f",&principle);
   
   printf("Enter Numbers of Times or years");
   scanf("\n%f",&time);
   
   printf("Enter ROI ");
   scanf("\n%f",&r);
   
   ammount = principle * pow((1 + r / 100), time);
   ci=ammount - principle; 
   
   printf("coumpund interest  you have to paid is :%f",ci);
   
   ci=ci + principle;
   
   printf("\n Total ammount you have to paid of :%f",ci);
   
   return 0;
}
