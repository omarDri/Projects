void	*ft_bzero(void  *s, unsigned int n)
{
	int nl;
	int i;
	unsigned char *str;

	str = (unsigned char *)s;
	nl = '\0';
	i = 0;
	while (i < n)
		{
			str[i] = nl;
			i++;
		}
	return(s);
}
