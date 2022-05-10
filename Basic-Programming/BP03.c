/*
Read two integers and output their sum, difference, multiplication
*/

#include <stdio.h>

int main()
{
	int n1, n2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("%d\n", (n1+n2));
	printf("%d\n", (n1-n2));
	printf("%d\n", (n1*n2));
	return 0;
}