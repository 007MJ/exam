size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i, j = 0;

	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
		}
		i++;
	}
	return (i);
}
