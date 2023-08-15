#include "stdio.h"

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	printf("%c", src[i]);
	while (src[i] != '\0')
	{
		printf("%c", src[i]);
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char s1[50] = "aaaa";
	char s2[50] = "5678";
	printf("%s", ft_strcpy(s2, s1));
}
