#include "../include/libft.h"
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    unsigned char *srce;
    
    if(!dest || !src)
        return (NULL);
    dst = (unsigned char *)dest;
    srce = (unsigned char *)src;
   if(srce < dst)
   {
	   while(n-- > 0)
        dst[n] = srce[n];
   }
    else
        ft_memcpy(dst, srce, n);
    return (dest);
}
