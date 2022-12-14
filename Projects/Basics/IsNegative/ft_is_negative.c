/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-03 14:48:05
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-03 15:21:03
 * @ Description:
 */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int nbr)
{
    if (nbr < 0)
        ft_putchar('N');
    if (nbr >= 0)
        ft_putchar("P");
}

int main(void)
{
    ft_is_negative('1');
    return (0);
}
