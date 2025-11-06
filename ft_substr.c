#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t s_len;

    // Null check
    if (!s)
        return (NULL);
    
    // If start is beyond the end of the string
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));
    
    // Adjust len if it goes past the end of s
    if (len > s_len - start)
        len = s_len - start;

    // Allocate memory for sub string
    sub = malloc(sizeof(char) * (len + 1));
    if(!sub)
        return (NULL);
    
    // Copy substring
    ft_strlcpy(sub, s + start, len + 1);
    return (sub);
}