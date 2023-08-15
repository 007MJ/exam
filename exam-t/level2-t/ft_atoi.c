#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int n;
	int result;

	n = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13 )|| str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		n *=-1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * n);
}

int main (void)
{
	printf("%d", ft_atoi("--12322222"));
}
