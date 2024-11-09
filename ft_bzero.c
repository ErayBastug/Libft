void	ft_bzero(void *s, int n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '0';
		p++;
		n--;
	}
}
