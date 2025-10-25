#include "libft.h"

int ft_isalnum(int n) {
    return (ft_isalpha(n) || ft_isdigit(n));
}