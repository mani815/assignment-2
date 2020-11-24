#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i;
	printf("enter number to print table:\n");
	scanf("%d", &n);
	for(i=1 ; i<=10 ; i++)
	{
	    printf("%d * %d = %d\n", n,i,(n*i));
	}
	return 0;
}

