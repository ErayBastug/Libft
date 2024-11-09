void	*ft_memmove(void *dst, const void *src, int n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (s > d)
		ft_memmove(dst, src, n);
	else if (s < d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dst);
}
