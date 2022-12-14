/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-11 17:56:14
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-11 18:28:21
 * @ Description:
 */

#include<stdio.h>

void    ft_toupper(char *src)
{
    int i;
    char *dest;

    i = 0;
    while (src[i] != '\0')
    {
        if (src[i] >= 97 && src[i] <= 122)
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
    ft_toupper(src);
    // dest = ft_toupper(src);
    // printf("%s", dest);
    return(0);
}