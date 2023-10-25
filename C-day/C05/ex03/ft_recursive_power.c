/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:48:22 by moseffar          #+#    #+#             */
/*   Updated: 2023/10/01 01:11:05 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
