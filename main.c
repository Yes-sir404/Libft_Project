#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>

int main(void)
{
    printf("Normal: %s\n", ft_strjoin("Hello, ", "World!"));

    printf("Empty: %s\n", ft_strjoin("", ""));

    printf("NULL test: %s\n", ft_strjoin(NULL, "World!")); // should return NULL safely

    // Overflow simulation
    char *overflow = ft_strjoin("a", "");
    if (overflow)
        printf("Safe small case: %s\n", overflow);

    size_t big = SIZE_MAX / 2;
    char *fake1 = malloc(big);
    char *fake2 = malloc(big);
    char *joined = ft_strjoin(fake1, fake2);
    if (!joined)
        printf("Overflow check: SAFE ✅ (malloc failed)\n");

    free(fake1);
    free(fake2);
}
