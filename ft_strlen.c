#include "libft.h"

size_t ft_strlen(const char *s){
    size_t c;
    c = 0;
    while(*s) {
        c++ ;
        s++;
    }
    return c;
}