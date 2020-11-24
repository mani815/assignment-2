#include <stdio.h>

int main(void) {
    int n, swapped_n, first_digit,last_digit,digits;
    
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    last_digit=n%10;
    
    digits=(int)log10(n);
    
    first_digit=(int)(n/pow(10,digits));
    
    swapped_n=last_digit;
    swapped_n*=(int)round(pow(10,digits));
    swapped_n+=n%((int)round(pow(10,digits)));
    swapped_n-=last_digit;
    swapped_n+=first_digit;
    
    printf("number after swapping first and last digit=%d", swapped_n);
	
	return 0;
}

