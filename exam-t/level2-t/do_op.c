#include "unistd.h"

void putchar (char c)
{
	write (1, &c, 1);
}

void putnbr(int n)
{
	if (n < 0)
	{
		write (1, "-", 1);
		n = n * -1;
	}
	if (n > 9)
	{
		putnbr(n/10);
	}
	putchar(n % 10 + '0');
}

int ft_atoi(char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		n *= -1;;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * n);
}

int main (int argc, char *argv[])
{
	int result;
	int one;
	char *signe;
	int two;

	result = 0;
	one = 0;
	signe = NULL;
	two  = 0;
	if (argc == 4)
	{
		one	= ft_atoi(argv[1]);
		signe = argv[2];
		two	= ft_atoi(argv[3]);

		if (argv[2][0] == '*')
		{
			result = one * two;
		}
		if (argv[2][0] == '/')
		{
			result = one / two;
		}
		if (argv[2][0] == '+')
		{
			result = one + two;
		}
		putnbr(result);
	}
	write(1, "\n", 1);
}
