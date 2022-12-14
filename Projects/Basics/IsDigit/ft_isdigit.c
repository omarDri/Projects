/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-07 21:05:52
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-11 15:25:35
 * @ Description:
 */

#include<stdio.h>

int ft_isdigit(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] < 48 || str[c] > 57)
            return(0);
        c++;
    }
    return(1);
}

int main(void)
{
    char *str;
    int i;

    str = "";
    i = ft_isdigit(str);
    ft_isdigit(str);
    printf("%d", i);
    return (0);
}