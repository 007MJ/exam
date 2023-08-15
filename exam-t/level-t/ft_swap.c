#include "stdio.h"

void ft_swap (int *a, int *b)
{
	int c;

	c = 0;
	 c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int b_1, c_1;

	b_1 = 1;
	c_1 = 2;
	int *b = &b_1;
	int *c = &c_1;
	ft_swap(b, c);
	printf("%d, %d", *b, *c);
}

