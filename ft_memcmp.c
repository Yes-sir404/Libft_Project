#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    const	unsigned char *y1;
	const	unsigned char *y2;
    size_t	i;

	y1 = (const unsigned char *) s1;
	y2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (y1[i] != y2[i])
		{
			return ((int) y1[i] - y2[i]);
		}
		i++;
	}
	return (0);
}