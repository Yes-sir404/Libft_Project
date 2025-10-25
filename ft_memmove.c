#include "libft.h"

void *ft_memmove(void *dest,const void *src,size_t n){
    unsigned char *d;
    unsigned const char *s;
    size_t i;

    d = (unsigned char*)dest;
    s = (unsigned const char*)src;
    i = 0;

    if((dest == src) || (n == 0))
        return (dest);

    if (d > s) {
        while(n--){
            d[n] =s[n];
        }
        return (dest);
    } else {
        while(i < n){
            d[i] = s[i];
            i++;
        }
        return (dest);
    }
}