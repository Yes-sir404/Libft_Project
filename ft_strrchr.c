#include "libft.h"

char *ft_strrchr(const char *str, int c){
    int len_str;

    len_str = ft_strlen(str);

    while(len_str >= 0){
        if(str[len_str] == (char)c)
            return ((char *)&str[len_str]);
        len_str--;
    }
    return (NULL);
}