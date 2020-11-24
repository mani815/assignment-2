#include <stdio.h>

int main(void) {
	// your code goes here
	long long n;
	int count=0;
	printf("Enter a number:\n");
	scanf("%lld", &n);
	do
	{
	    count++;
	    n/=10;
	}
	while(n!=0);
	printf("total digits: %d", count );
	return 0;
}

