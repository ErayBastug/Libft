#include <stddef.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t a;
    size_t b;
    size_t i;

    a = strlen(dst);
    b = strlen(src);
    i = 0;
    if (dstsize >= a + b + 1)
    {
        while (src[i])
        {
            dst[a + i] = src[i];
            i++;        
        }    
    }
    else if (dstsize > a)
    {
        while (dstsize - a - i -1  > 0)
        {
            dst[a + i] = src[i];
            i++;
        }
    }
    dst[a + i] = '\0';
    return (a + b);
}
#include <stdio.h>
int main()
{
    char dst[] = "eray";
    char src[] = "bastug";
    printf("%zu\n", ft_strlcat(dst, src, 11));
    printf("%s\n", dst);
}
