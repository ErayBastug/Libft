void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (i < strlen(s))
    {
        write(fd, &s[i], 1);
        i++;
    }
}
