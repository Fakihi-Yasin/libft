#include "libft.h"
#include "stdio.h"

int main(void)
{
    
    char str[] = "";
     // readonly string literal // undefined behavior if modified
    ft_bzero(str, 5);
    printf("'%s'\n", str);
    // printf(" %s\n", str);
    // printf(" %d\n", atoi(str));
}