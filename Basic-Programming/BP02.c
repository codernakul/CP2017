/*
Read a char, int and output the same
*/

#include <stdio.h>

int main()
{
	int n; char ch;
	printf("Enter a char: ");
	scanf("%c", &ch);
	printf("The char is: %c\n", ch); 
	// if taking char after int use fflush(stdin);
	printf("Enter a int: ");
	scanf("%d", &n);
	printf("The int is: %d\n", n);
	return 0;
}