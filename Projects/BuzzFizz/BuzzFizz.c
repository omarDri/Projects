/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-03 14:35:39
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-03 22:02:04
 * @ Description:
 */

//3 buzz 5 fizz
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_BuzzFizz(void)
{
    int nbr;
    char a;
    char b; 

    nbr = 1;
    while (nbr < 101)
    {
        if((nbr % 3 == 0) && (nbr % 5 != 0))
        {
            write(1, "buzz", 4);
            write(1, "\n", 1);
            nbr++;
        }
        if((nbr % 5 == 0) && (nbr % 3 != 0))
        {
            write(1, "fizz", 4);
            write(1, "\n", 1);
            nbr++;
        }
        if (nbr % 5 == 0 && nbr % 3 == 0)
        {
            write(1, "BuzzFizz", 8);
           write(1, "\n", 1);
            nbr++;
        }
        if ((nbr > 9) && (nbr % 5 > 0) && (nbr % 3 > 0))
        {
            a = nbr / 10 + 48;
            b = nbr % 10 + 48;
            write(1, &a, 1);
            write(1, &b, 1);
            write(1, "\n", 1);
            nbr++;
        }
         else if ((nbr < 10) && (nbr % 3 > 0) && (nbr % 5 > 0))
        {
            ft_putchar(nbr + 48);
            write(1, "\n", 1);
            nbr++;
        }
    }
    // nbr++;
}

int main(void)
{
    ft_BuzzFizz();
    return (0);
}