#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, int n){
    int i;
    unsigned char *s3;
    unsigned char *s4;
    
    s3 = (unsigned char *)s1;
    s4 = (unsigned char *)s2;
    
    i = 0;
    while (i < n && (s3[i] || s4[i]))
    {
        if (s3[i] != s4[i])
        {
            return (s3[i] - s4[i]);
        }
        i++;
    }
    return (0);
}

int main() 
{
    char s1[] = "araya" ;
    char s2[] = "bray" ;
   printf("%d\n", ft_memcmp(s1, s2, '4'));
}
