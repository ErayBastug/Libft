char	*ft_strnstr(const char *haystack, const char *needle, size_t c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < c && haystack[i])
	{
		if (haystack[i] == needle[a])
		{
			while (haystack[i + a] == needle[a])
				a++;
			if (needle[a] == 0 || needle[a - 1] == 0
				&& haystack[i + a -1] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
