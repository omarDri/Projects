/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-11 17:56:02
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-11 18:29:36
 * @ Description:
 */

#include<stdio.h>

void    ft_tolower(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i] != '\0')
    {
        if (src[i] >= 65 && src[i] <= 90)
            dest[i] = src[i] - 32; 
        i++;
    }
    //return (*src);
    //printf("%s", dest);
}

int main(void)
{
    char *src;
    //char dest;

    src = "HEllo";
    ft_tolower(src);
    // dest = ft_toupper(src);
    // printf("%s", dest);
    return(0);
}