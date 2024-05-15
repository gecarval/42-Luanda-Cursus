// ESTOU EM CASA, ENTÃO NÃO DEU PARA COLOCAR CABEÇALHO, NEM VERIFICAR A NORMA CÊS PODEM COLOCAR 
#include "libft.h"

void  *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;
    ft_memset(ptr, 0, nmemb * size);
    return (ptr);
}
