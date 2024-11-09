void	*ft_calloc(int count, int size)
{
	void	*str;
	int	i;

	i = 0;
	if (str == NULL)
    	return (NULL);
	str = malloc(count * size);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
