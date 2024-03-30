/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:46:37 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/21 09:08:42 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	ft_strlowcase(str);
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			if (str[a - 1] < '0' || (str[a - 1] > '9' && str[a - 1] < 'A')
				|| (str[a - 1] > 'Z' && str[a - 1] < 'a') || str[a - 1] > 'z')
				str[a] -= 32;
		a++;
	}
	return (str);
}
