/*
Finding a remainder after dividing one number by another
*/

#include <stdio.h>

int main()
{
	int dividend, divisor;
	printf("Enter dividend and divisor to find their remainder: ");
	scanf("%d %d", &dividend, &divisor);
	printf("Remainder = %d", (dividend%divisor));
	return 0;
}