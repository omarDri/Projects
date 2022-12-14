/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-03 13:44:40
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-03 13:58:01
 * @ Description:
 */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_string(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar (str[i]);
        i++;
    }
    
}

int main(void)
{
    char    *str;

    str = "Hello World";
    ft_print_string(str);
    return (0);
}
