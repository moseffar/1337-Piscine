/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:42:51 by moseffar          #+#    #+#             */
/*   Updated: 2023/10/01 12:03:51 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	a;
	int	str;

	a = 2;
	str = 1;
	if (nb <= 1)
		return (0);
	if (nb > 2)
	{
		while (a <= (nb / 2))
		{
			if (nb % a == 0)
				return (0);
			a++;
		}
	}
	return (str);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
