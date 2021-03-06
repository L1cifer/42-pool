
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    return (i);
}
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    k;
    k = ft_strlen(dest);
    i = 0;
    j = ft_strlen(dest);
    if (size > 0)
    {
        while (j < (size - 1) && src[i] != '\0')
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = '\0';
    }
    if (size >= k)
        return (k + ft_strlen(src));
    else
        return (size + ft_strlen(src));
}