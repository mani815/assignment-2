#include <stdio.h>

int main(void) {
	// your code goes here
	long long n;
	int first,last;
	printf("Enter any number:\n");
	scanf("%lld", &n);
	last=n%10;
	while(n>=10)
	{
	    n=n/10;
	}
	first=n;
	printf("first digit= %d and last digit= %d", first,last);
	
	return 0;
}

