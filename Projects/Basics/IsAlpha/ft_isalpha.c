/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-07 15:34:25
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-10 01:19:32
 * @ Description:
 */

#include<stdio.h>

int ft_isalpha(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] < 65 || (str[c] > 90 && str[c] < 97) || str[c] > 122)
            return(0);
        c++;
    }
    return(1);
}

int main(void)
{
    char *str;
    int i;

    str = "a1";
    i = ft_isalpha(str);
    ft_isalpha(str);
    printf("%d", i);
    return (0);
}