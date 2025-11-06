#include "libft.h"
#include <stdlib.h>

static size_t word_counter(char const *s,char c){
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    while (s && s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static void free_split(char **split, size_t words){
    size_t i;

    i = 0;
    while (i < words)
        free(split[i++]);
    free(split);
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t i;
    size_t start;
    size_t word_index;

    i = 0;
    word_index = 0;
    if (!s)
        return (NULL);
    result = malloc((word_counter(s,c) + 1) * sizeof(char *));
    if (!result[word_index])
        return (NULL);
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        start = i;
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
        {
            result[word_index] = ft_substr(s, start, i - start);
            if (!result)
                return (free_split(result,word_index),NULL);
            word_index++;
        }
    }
    result[word_index] = NULL;
    return (result);
}
