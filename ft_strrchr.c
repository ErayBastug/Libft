char *ft_strrchr(const char *s, int c){
  int a;
    
  a = ft_strlen(s);
  if (c == 0)
  {
      return &s[a];
  }
  while(a >= 0)
  {
    if(s[a] == c)
    {
      return &s[a];
    }
    a--;    
  }
    return NULL;
}
