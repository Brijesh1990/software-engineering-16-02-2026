#include <stdio.h>
/* 
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
	char grade='B';
	printf("Enter grade in form of A,B,C to get result \n");
	switch(grade)
	{
		case 'A':
			printf("%c You are Topper students \n");
			break;
			
	    
		case 'B':
			printf("%c You are Average students \n");
			break;		
			
		
		case 'C':
			printf("%c You are failed students \n");
			break;	
			
	    default:
		  	printf("your grade is not found anywhere contact with admin");
			break;	
				
	}
	
	return 0;
	
}

