#include <stdio.h>
#include "libft.h"

int main() {
    char a[] = "HELLO 1337";
    ft_memmove(a+6,a , 5);
    printf("memmove = %s\n)", a);
    return 0;
}
