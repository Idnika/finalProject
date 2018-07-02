#include <stdio.h>

int square(int n);

int main(void)
{
	int result, a;

	printf("input integer: ");
	scanf("%d", &a);

	result = square(a);
	printf("%d \n", result);

	return 0;
}

int square(int n)
{
	return (n * n);
}