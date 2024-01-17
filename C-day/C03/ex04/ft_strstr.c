/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:50:46 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/24 15:14:05 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			b++;
		}
		if (to_find[b] == '\0')
			return (str + a);
		a++;
		b = 0;
	}
	return (0);
}
