/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:08:21 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/16 10:11:36 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	b;

	i = 0;
	while (i <= 98)
	{
		b = i + 1;
		while (b <= 99)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			write(1, " ", 1);
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			b++;
			if (i != 98)
				write(1, ", ", 2);
		}
		i++;
	}
}
