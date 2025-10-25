#include "libft.h"

size_t ft_strlcat(char *dest, const char *src,size_t destsize){
    size_t i;
    size_t dest_len;
    size_t src_len;
 
    
    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    if (destsize <= dest_len)
        return (dest_len + src_len);
    
    i = 0;
    while (src[i] && i < (destsize - dest_len - 1) ){
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return (src_len + dest_len);
    

}