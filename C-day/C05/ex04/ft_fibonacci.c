/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 01:11:30 by moseffar          #+#    #+#             */
/*   Updated: 2023/10/01 01:23:29 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int indx)
{
	if (indx < 0)
		return (-1);
	if (indx == 0)
		return (0);
	if (indx == 1)
		return (1);
	else
		return (ft_fibonacci(indx - 1) + ft_fibonacci(indx - 2));
}
