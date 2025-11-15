#include "libft.h"
#include "stdio.h"

// int main(void)
// {
    
//     char str[] = "";
//      // readonly string literal // undefined behavior if modified
//     ft_bzero(str, 5);
//     printf("'%s'\n", str);
//     // printf(" %s\n", str);
//     // printf(" %d\n", atoi(str));
// }



int main(void)
{
    FILE *file = fopen("file.txt", "w"); // create/open file for writing
    if (!file)
    {
        perror("fopen failed");
        return 1;
    }

    int fd = fileno(file); // get file descriptor safely

    ft_putchar_fd('b', fd);        // write single character
    ft_putendl_fd("Hello!", fd);    // write string with newline

    fclose(file); // close file safely

    return 0;
}
