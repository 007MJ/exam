#include <stdio.h>
#include <string.h>

size_t ft_strchr(const char *accept , char c)
{
	size_t i;

	i = 0;
	while (accept[i])
	{
		if (accept[i] == c)
			return (0);
		i++;
	}
	return (1);
}
size_t ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if ((int)ft_strchr(accept, s[i]) == 1)
			break;
		i++;
	}
	return (i);
}

int main (void)
{
	printf("me %zu, %lu eu", ft_strspn("hello", "hjie"), strspn("hello", "hjie"));
}
