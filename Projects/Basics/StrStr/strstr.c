/**
 * @ Author: BlackhandAl
 * @ Create Time: 2022-12-12 14:37:49
 * @ Modified by: BlackhandAl
 * @ Modified time: 2022-12-12 14:39:50
 * @ Description:
 */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k] && str[k + i] != '\0')
			k++;
		if (to_find[k] == '\0')
			return (str + i);
		i++;
		k = 0;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main (void) 
{
char *haystack = "so hello sexy lady or gentlelad!";
char *needle = "sexy";
char *ret;
ret = ft_strstr(haystack, needle);
printf("The substring is: %s\n", ret);
return(0);
}
