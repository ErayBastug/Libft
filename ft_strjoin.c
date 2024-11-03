char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int i;
    int a;

    i = 0;
    a = 0;
    str = (char *)malloc((strlen(s1) + strlen(s2)) *sizeof(char) + 1);
    if (str == NULL)
		return (NULL);
    while (i < strlen(s1))
    {
        str[i] = s1[i];
        i++;
    }
    while (a < strlen(s2))
    {
        str[i + a] = s2[a];
        a++;
    }
    str[i + a] = '\0';
    return (str);
}
