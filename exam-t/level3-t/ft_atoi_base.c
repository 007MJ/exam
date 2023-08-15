#include <stdio.h>
char to_lower(char c)
{
	if (c >= 'A'  &&  c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int base)
{
	int max_digit;
	if (base <= 10)
		max_digit = base + '0';
	else
		max_digit = base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base (const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int digit = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while ((digit = get_digit(to_lower(str[i]), str_base))>= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		i++;
	}
	return (result);
}

int main (void)
{
	printf("%d", ft_atoi_base("1223a", 10));
}
