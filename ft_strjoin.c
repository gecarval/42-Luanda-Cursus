// ESTOU EM CASA, ENTÃO NÃO DEU PARA COLOCAR CABEÇALHO, NEM VERIFICAR A NORMA CÊS PODEM COLOCAR 
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  ss1len;
    size_t  ss2len;
    size_t  i;
    size_t  j;
    char    *str;

    ss1len = ft_strlen(s1);
    ss2len = ft_strlen(s2);
    i = -1;
    j = -1;
    str = (char *)malloc(((ss1len + ss2len) + 1) * sizeof(*s1));
    if (str == NULL)
        return (NULL);
    while (++i < ss1len)
        str[i] = s1[i];
    while (++j < ss2len)
        str[i + j] = s2[j];
    return (str);
}