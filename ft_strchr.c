char *ft_strchr(const char *s, int c){
    int i;

    i = 0;
    if (c == 0)
    {
        return ((char *)&s[i]);
    }
    while(s[i])
    {
        if(s[i] == c)
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
   printf("%s\n", ft_strchr(s, b));
    printf("%s", &s[2]);
}
