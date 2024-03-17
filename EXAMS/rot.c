#include <unistd.h>
int	main(int	ac, char	**av)
{
	if(ac == 2)
	{
		int	a=0;
		while(av[1][a])
		{
			if((av[1][a] >= 'A' && av[1][a] <= 'M') || (av[1][a] >= 'a' && av[1][a] <= 'm'))
				av[1][a] += 13;
			else if((av[1][a] >= 'n' && av[1][a] <= 'z') || (av[1][a] >= 'N' && av[1][a] <= 'Z'))
				av[1][a] -= 13;
			write(1, &av[1][a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
}

