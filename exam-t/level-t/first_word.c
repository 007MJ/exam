#include "unistd.h"

// void ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while ( argv[1][i] && argv[1][i] == ' ')
			i++;
		while ( argv[1][i] && argv[1][i] != ' ')
		{

			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}
