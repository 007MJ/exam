#include <stdio.h>

char *ft_strrev(char *str)
{
	printf("ici");
	int i;
	int _len;

	i = 0;
	int len = 0;
	char tem = 0;

	while (str[len] != '\0')
		len++;
		_len = len - 1 ;

	printf("%d", len);
	while (i < len / 2)
	{
		tem = str[i];
		str[i] = str[_len];
		str[_len] = tem;
		_len--;
		i++;
	}
	return (str);
}

int main(void)
{
	char str_1[6] = "hello";
	char *str = ft_strrev(str_1);

	printf("%s", str);
}
