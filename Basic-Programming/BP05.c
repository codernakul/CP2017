/*
Calculate simple interest given principle, duration and rate of interest
*/

#include <stdio.h>

int main()
{
	int p, t;
	float r, si;
	printf("Enter principle, duration and rate of interest: ");
	scanf("%d %d %f", &p, &t, &r);
	si=(p*r*t)/100;
	printf("The simple interest comes out to be = %f", si);
	return 0;
}