#include "unistd.h"
void rot(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c += 13;
		write(1, &c, 1);
		return ;
	}
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c -= 13;
		write(1, &c, 1);
		return ;
	}
	write(1, &c, 1);
}
int main (int argc, char **c)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (c[1][i])
		{
			rot(c[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
