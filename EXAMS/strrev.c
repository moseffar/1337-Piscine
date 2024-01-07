char    *ft_strrev(char *str)
{
	int	i = 0;
	int	tl = 0;
	char	s;
	int		m;

	while(str[i])
	{
		i++;
	}
	m = (i/2);
	while(tl < m)
	{
		s = str[tl];
		str[tl] = str[i-1];
		str[i-1] = s;
		tl++;
		i--;
	}
	return(str);
}
#include <stdio.h>
int main()
{
	char	str[] = "qwerty123456";
	printf("%s\n", ft_strrev(str));
}
