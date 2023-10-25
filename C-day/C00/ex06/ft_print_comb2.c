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

void	putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			write(1, " ", 1);
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
