#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,sum=0;
	scanf("%d", &n);
	for(i=1 ; i<n ; i++)
	{
	    if(i%2 != 0)
	    {
	        sum+=i;
	    }
	}
	printf("sum of odd numbers b/w 1 to %d are:%d", n,sum);
	return 0;
}

