#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    size_t len_s1;
    size_t len_s2;

    // Null check
    if(!s1 || !s2)
        return (NULL);
    
    // Allocate memory for both + null terminator
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    
    joined = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!joined)
        return (NULL);
    
    // Copy both strings safely
    ft_strlcpy(joined, s1, len_s1 + 1);
    ft_strlcat(joined,s2,len_s1 + len_s2 + 1);
    return (joined);
}