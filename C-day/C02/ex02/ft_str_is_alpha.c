/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:43:38 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/24 12:00:40 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 'a' && str[a] <= 'z') && !(str[a] >= 'A'
				&& str[a] <= 'Z'))
			return (0);
		a++;
	}
	return (1);
}
