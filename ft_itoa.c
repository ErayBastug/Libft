int    ft_number_size(int number)
{
    int    length;
    
    length = 0;
    if (number == 0)
        return (1);
    if (number < 0)
        length += 1;
    while (number != 0)
    {
        number /= 10;
        length++;
    }
    return (length);
}

char *ft_itoa(int n)
{
    char *str;
    int i;
    int a;
    
    a = ft_number_size(n);
    i = ft_number_size(n);
    str = (char *)malloc(sizeof(char) * a + 1);
    if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
    while (n != 0)
    {
        str[a - 1] = (n % 10) + 48;
        n = n /10;
        a--;
    }
    
    str[i] = 0;
    return(str);
}
