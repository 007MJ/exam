#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;

	i = 0;
	int result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10  + (str[i] - '0');
		i++;
	}
	return (result);
}
void putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n/10);
	}
	char nb = n % 10 + '0';
	write (1 , &nb, 1);
}
int is_prime(int num)
{
	int i = 2;

	if (num <= 1)
		return (0);
	while ( i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (int argc ,char *argv[])
{
	int sum = 0;
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);
		while (n > 0)
		{
			if (is_prime(n))
				sum += n;
			n--;
		}
		putnbr(sum);
	}
	else
	{
		 write(1, "0", 1);
		write(1, "\n", 1);
	}
}
