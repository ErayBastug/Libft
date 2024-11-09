void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}

#include <stdio.h>

int main()
{
	char array[] = "eray";
	printf("%s\n", ft_memset(array, 'a', sizeof(array)));
	printf("%lu\n",sizeof(array));
}
