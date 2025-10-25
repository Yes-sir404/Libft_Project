#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned char *ptr;
    unsigned char cc;
    size_t i;

    ptr = (unsigned char *) s;
    cc = (unsigned char) c;
    i = 0;

    while(i < n){

        if (ptr[i] == cc)
            return (&ptr[i]);
            
        i++;
    }
    return (NULL);
}