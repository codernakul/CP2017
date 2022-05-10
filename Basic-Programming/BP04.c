/*
Write a program to calculate the area of a circle given the radius
*/

#include <stdio.h>

int main()
{
	int r;
	float area;
	printf("Enter the radius: ");
	scanf("%d", &r);
	area=3.14*r*r;
	printf("Area of circle with a radius of %d = %f", r, area);
	return 0;
}