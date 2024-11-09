int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	result;

	i = 0;
	a = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= a;
	return (result);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_atoi("-1234"));
// }
