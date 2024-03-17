#include <unistd.h>
char *ft_rev_print (char *str)
{
	int	a = 0;

	while(str[a])
	{
		a++;
	}
	a = a -1;
	while(a>=0)
	{
		write(1, &str[a], 1);
	   a--;	
	}
	write(1, "\n", 1);
	return (str);
}
int main()
{
	char	str[] = "";
	ft_rev_print(str);
}
