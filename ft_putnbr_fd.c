#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char a;
    
    if (n == -2147483648)
        write(fd, &"-2147483648", 11);
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = n * -1;
        ft_putnbr_fd(n,fd);
    }
    else if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        a = (n % 10) + '0';
        write(fd, &a, 1);
    }
    else
    {
        a = n + 48;
        write(fd, &a, 1);
    }
}
