/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:31:10 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/24 12:20:54 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < size - 1 && size > 0)
	{
		dest[a] = src[a];
		a++;
	}
	if (size > 0)
		dest[a] = '\0';
	while (src[a] != '\0')
		a++;
	return (a);
}
