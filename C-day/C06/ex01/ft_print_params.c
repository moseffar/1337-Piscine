/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:48:54 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/28 17:52:40 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	while (ac > a)
	{
		b = 0;
		while (av[a][b])
		{
			write(1, &av[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}
