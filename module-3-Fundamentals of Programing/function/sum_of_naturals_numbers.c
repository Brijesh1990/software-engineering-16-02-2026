#include<stdio.h>
//sum of naturals numbers 
void sumnaturalNumbers()
{
	int n=10, sum=0, i;
    //applied loop 
    for(i=1;i<n;i++) 
    {
    	sum+=i;
        //sum=sum+i  sum=0+1 ; sum=1
        printf("%d\n",sum);
	}
	
}

//call the function 

int main()
{
	sumnaturalNumbers();
	return 0;
}

