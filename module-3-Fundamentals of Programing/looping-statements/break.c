#include <stdio.h>
int main()
{
//intialize a variables 
int i;
//create a loop for print 1 to 5
//for(i=0; i<=5; i++)
//{
// printf("%d \n",i);	
//}	

for(i=1; i<=10; i++)
{
//check condition	
 if(i==6)
 {
 	break;
 }
 printf("%d \n",i);	
}
return 0;
}
