/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-03 13:31:28
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-03 13:42:44
 * @ Description:
 */


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (void)
{
    char    a;

    a = 'b';
    ft_putchar(a);
    return (0);
}