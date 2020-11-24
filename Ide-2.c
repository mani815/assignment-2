#include <stdio.h>

int main(void) {
	// your code goes here
	int i;
	printf("even number from 1-100 are: \n");
	for(i=1 ; i<=100 ; i++)
	{
	    if(i%2 == 0)
	    {
	        printf("%d\n", i);
	    }
	}
	return 0;
}

