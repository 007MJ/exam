char *ft_strdup(char *src)
{
	int i = 0;
	char *src_m;

	src_m = NULL;
	while (src[i])
		i++;
	src_m = malloc (i * sizeof(char *) + 1);
	if (!src_m)
		return (NULL);
	while (src[i] != '\0')
	{
		src_m[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (src_m);
}
