#include <stdio.h>
#define BASE 10
int main(void) {
	// your code goes here
	long long num,n;
	int i,last_digit,frequency[BASE];
	printf("Enter any number:\n");
	scanf("%lld",&num);
	
	for(i=0 ; i<BASE ; i++)
	{
	    frequency[i]=0;
	}
	
	n=num;
	
	while(n!=0)
	{
	    last_digit=n%10;
	    n/=10;
	    frequency[last_digit]++;
	}
	printf("frequency of each digit in %lld is:\n",num);
	for(i=0 ; i<BASE ; i++)
	{
	    printf("frequency of %d=%d\n",i,frequency[i]);
	}
	return 0;
}

