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
	long	i;
	long	ah;

	ah = nb;
	if (ah <= 0)
		return (0);
	if (ah == 1)
		return (1);
	i = 2;
	if (ah >= 2)
	{
		while (i * i <= ah)
		{
			if (i * i == ah)
				return (i);
			i++;
		}
	}
	return (0);
}
