// ESTOU EM CASA, ENTÃO NÃO DEU PARA COLOCAR CABEÇALHO, NEM VERIFICAR A NORMA CÊS PODEM COLOCAR(PLEASE)
#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    size_t     i;
    char    *str;
    char    *ptrstr;

    ptrstr = (char *)s;
    len = ft_strlen(s);
    i = 0;
    str = (char *)malloc((len - 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        str[i] = ptrstr[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}