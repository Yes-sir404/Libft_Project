#include "libft.h"

size_t ft_strlcpy(char *dest,const char *src,size_t destsize){
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(src);
    
    if(destsize == 0)
        return (len);
    
    while(src[i] && i < destsize - 1){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (len);
}