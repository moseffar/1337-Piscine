#include <unistd.h>
int	main(int	ac, char	**av)
{
	if(ac == 2)
	{
		int	o=0;
		while(av[1][o] == ' ' || av[1][o] == '	')
			o++;
		while(av[1][o] != ' ' && av[1][o] != '\t' && av[1][o] != '\0')
		{
			write(1, &av[1][o], 1);
			o++;
		}
	}
	write(1, "\n", 1);
}
