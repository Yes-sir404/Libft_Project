#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    size_t len;
    char *ptr;
    
    len = ft_strlen(s);
    ptr = malloc(len + 1);
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr,s,len + 1);
    return (ptr);
}