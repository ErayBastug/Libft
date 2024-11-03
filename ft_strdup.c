char *ft_strdup(const char *s1)
{
    char *str;
    int i;
    int a;

    a = 0;
    i = ft_strlen(s1);
    str = (char *)malloc(i * sizeof(char) + 1);
    if (str == NULL)
        return (NULL);
    while (a < i)
    {
        str[a] = s1[a];
        a++;
    }
    str[a] = '\0';
    return (str);
}
