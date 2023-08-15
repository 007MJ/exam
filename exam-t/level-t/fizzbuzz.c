#include "unistd.h"
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n/10);
	}
	ft_putchar(n % 10 + '0');

}

int main (int argc , char **argv)
{
	(void)argv;
	(void)argc;
	int i;

	i = 1;
	while (i < 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			ft_putstr("fizzbuzz\n");
		}
		else if ((i % 3) == 0)
		{
			ft_putstr("fizz\n");
		}
		else if ((i % 5) == 0)
		{
			ft_putstr("buzz\n");
		}
		else
		{

			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
