#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s, char const *set)
{
    char *trimmed;
    size_t start;
    size_t end;
    // Check for NULL input
    if (!s || !set) 
        return (NULL);

    // Skip characters from the start that are in 'set'
    start = 0; 
    while (s[start] && ft_strchr(set, s[start]))
        start++;

    // Skip characters from the end that are in 'set'
    end = ft_strlen(s);
    while (end > start && ft_strchr(set,s[end - 1]))
        end--;

    // Allocate memory for the trimmed string (+1 for '\0')
    trimmed = malloc(sizeof(char) * (end - start + 1));
    if(!trimmed)
        return (NULL);

    // Copy the substring safely
    ft_strlcpy(trimmed,s + start, end - start + 1);
    
    return (trimmed);
}