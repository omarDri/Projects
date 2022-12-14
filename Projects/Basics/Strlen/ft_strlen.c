/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-06 22:21:36
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-06 23:39:59
 * @ Description:
 */
//#include<stdio.h>

int ft_strlen (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

int main(void)
{
    char *a;

    a = "hello";
    ft_strlen(a);
    return (0);
}