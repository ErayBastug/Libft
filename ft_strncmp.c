int ft_strncmp(const char *s1, const char *s2, size_t n){
    int i;

    i = 0;
    while (i < n && (s1[i] || s2[i]))
    {
        if (s1[i] != s2[i])
        {
            return (s2[i] - s1[i]);
        }
        i++;
    }
    return (s2[i] - s1[i]);
}
