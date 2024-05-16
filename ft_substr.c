// ESTOU EM CASA, ENTÃO NÃO DEU PARA COLOCAR CABEÇALHO, NEM VERIFICAR A NORMA CÊS PODEM COLOCAR 
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  length;
    size_t  i;
    char    *sub;
    char    *ptr;

    length = ft_strlen(s);
    if (start >= length)
        return (NULL);
    sub = (char *)s + start;
    ptr = (char *)malloc((len + 1) * sizeof(*s));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (i < len && sub[i] != '\0')
    {
        ptr[i] = sub[i];
        i++;
    }
    ptr[i] = '\0'; 
    return (ptr);
}
