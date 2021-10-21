#include <stdio.h>
int main()
{
	int num, bin_val, dec_val = 0, base = 1, rem;
	printf("Enter a binary number (1 and 0): ");
	scanf_s("%d", &num);
	bin_val = num;
	while (num > 0) {
		rem = num % 10;
		dec_val = dec_val + rem * base;
		num = num / 10;
		base = base * 2;
	}
	printf("Entered binary number is: %d\n", bin_val);
	printf("Decimal equivalent is: %d\n", dec_val);
	return 0;
}