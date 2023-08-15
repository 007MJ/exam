#include "unistd.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int main (int argc ,  char *argv[])
{
	int i;
	int replace;
	int search;

	i = 0;
	replace = 0;
	search = 0;
	if (argc == 4)
	{
		while (argv[1][i])
		{
			if (ft_strlen(argv[2]) == 1  && argv[1][i] == argv[2][search])
				argv[1][i] = argv[3][replace];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
