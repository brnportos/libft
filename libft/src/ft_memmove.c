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

int main()
{
    size_t  n = 5;
    char s[] = "abcdefjkl";
    printf("%s\n", (char *)ft_memmove(s, s+2, n));
    printf("%s\n", (char *)memmove(s, s+2, n));
}
