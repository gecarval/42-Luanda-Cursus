// ESTOU EM CASA, ENTÃO NÃO DEU PARA COLOCAR CABEÇALHO, NEM VERIFICAR A NORMA CÊS PODEM COLOCAR 
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  c;
    char  *str;

    str = (char *)big;
    i = 0;
    if (ft_strlen(little) == 0 || big == little)
        return ((char *)big);
    while (i < len && str[i] != '\0')
    {
        c = 0;
        while (str[i + c] != '\0' && little[i] != '\0'
                && str[i + c] == little[c] && i + c < len)
          c++;
        if (c == ft_strlen(little))
          return (str + i);
        i++;
    }
    return (0);
}