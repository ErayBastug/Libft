#include <stdio.h>

void *ft_memchr(const void *s, int c, int n){
    int i;

    i = 0;
    if (c == 0)
    {
        return ((char *)&s[i]);
    }
    while(i < n && ((char *)s)[i] != 0)
    {
        if(((char *)s)[i] == c)
        {
            return ((char *)&s[i]);
        }
        i++;
    }
    return NULL;
}

int main() 
{
    char s[] = "eray" ;
   printf("%s\n", ft_memchr(s, 'a', 4));
    printf("%s", &s[2]);
}
