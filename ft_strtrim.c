int ft_stristr(const char *haystack, const char *needle)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (haystack[i] != '\0')
    {
        while (haystack[i + j] == needle[j])
        {
            if (needle[j + 1] == '\0')
                return (i);
            j++;
        }
        i++;
    }
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int a;

    i = 0;
    a = ft_stristr(s1, set);
    str = (char *)malloc((strlen(s1) - strlen(set)) *sizeof(char) + 1);
    if (str == NULL || s1[0] == NULL)
        return (NULL);
    while (i < a)
    {
        str[i] =  s1[i];
        i++;
    }
    a = i + strlen(set);
    while (s1[a])
    {
        str[i] =  s1[a];
        i++;
        a++;
    }
    str[i] = '\0';
    return (str);
}
