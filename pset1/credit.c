#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    long long cc_number;
    int length = 0;
    char cc_string[19];
    int sum =0;
    int sum2 =0;
    int sum3 =0;
    printf("credit card number: "); //ask user for credit card number
    cc_number = get_long_long(); //get credit card number save as long
    sprintf(cc_string, "%llu", cc_number); //convert long to string
    length = strlen(cc_string); //get credit card number length
    
    for(int i= (length-2); i >= 0; i-=2)//get sum of 2 times every other digit from second last number
    {
    	int d;
    	int s;
    	
    	d = (2* (cc_string[i]-48));
    	s = ((d / 10)+d % 10);
    	sum +=s;
    }
    
    for(int j=(length -1); j >= 0; j-=2)// get sum of digits that weren't multiplied by 2
    {
    	int m =0;
    	m += (cc_string[j]-48);
    	sum2 += m;
    }
    
    sum3 = sum + sum2;//add 2 sums together
	
	if(sum3 % 10 == 0)// check if the card number valid
	{
		printf("credit card VALID\n");
		if((cc_string[0]-48) == 3)// American Express
	    {
	    	printf("credit card belong to American Express\n");     
    	}
    	
    	else if((cc_string[0]-48) == 4)// VISA
    	{
		    printf("credit card belong to VISA\n");
    	}
    	
    	else if((cc_string[0]-48) == 5) //MasterCard
    	{
		    printf("credit card belong to MasterCard\n");
    	}
	}
	else
	{
		printf("credit card INVALIT\n");
	}
	
}
