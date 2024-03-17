char    *ft_strrev(char *str)
{
	int	a = 0;
	int	tl = 0;
	char	s;
	int		m;

	while(str[a])
	{
		a++;
	}
	m = (a/2);
	while(tl < m)
	{
		s = str[tl];
		str[tl] = str[a-1];
		str[a-1] = s;
		tl++;
		a--;
	}
	return(str);
}
#include <stdio.h>
int main()
{
	char	str[] = "qwerty123456";
	printf("%s\n", ft_strrev(str));
}
