/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-09 17:52:16
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-11 15:22:02
 * @ Description:
 */

#include<stdio.h>

int ft_isalpha(char *str)
{
    int c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] < 48 || str[c] > 57 && str[c] < 65 || str[c] > 90 && str[c] < 97 || str[c] > 122)  
            return(0);
        c++;
    }
    return(1);
}

int main(void)
{
    char *str;
    int i;

    str = "Hello123_";
    i = ft_isalpha(str);
    ft_isalpha(str);
    printf("%d", i);
    return (0);
}