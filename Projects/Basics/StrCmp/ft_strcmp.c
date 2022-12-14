/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-09 18:00:16
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-09 22:55:16
 * @ Description:
 */

#include<stdio.h>

int ft_strcmp(char *src, char *dest, int length)
{
    int i;
    int c;

    c = 0;
    i = 0;
    while (src[i] != '\0')
    {
        if (c == length)
            return (src[i] - dest[i]);
        if (src[i] == dest[i])
        {
            i++;
            c++;
        }
        if (src[i] != dest[i])
            return (src[i] - dest[i]);
    }
}

int main(void)
{
    char    *src;
    char    *dest;
    int i;
    int c;

    i = 1;
    src = "AC";
    dest = "AB";
    ft_strcmp(src, dest, i);
    c = ft_strcmp(src, dest, i);
    printf("%d", c);
    return (0);
}