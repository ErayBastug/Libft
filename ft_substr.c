char *ft_substr(char const *s, unsigned int start,
size_t len)
{
    char *str;
    int i;
    
    i = 0;
    str = malloc(len * sizeof(char) + 1);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
