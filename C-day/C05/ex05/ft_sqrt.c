/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:24:05 by moseffar          #+#    #+#             */
/*   Updated: 2023/10/01 12:05:32 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	in;
	long	alo;

	alo = nb;
	if (alo <= 0)
		return (0);
	if (alo == 1)
		return (1);
	in = 2;
	if (alo >= 2)
	{
		while (in * in <= alo)
		{
			if (in * in == alo)
				return (in);
			in++;
		}
	}
	return (0);
}
