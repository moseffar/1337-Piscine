/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:49:10 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/28 22:13:52 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_strrev(char *str)
{
	int	i = 0;
	int	tl = 0;
	char	s;
	int		m;

	while(str[i])
	{
		i++;
	}
	m = (i/2);
	while(tl < m)
	{
		s = str[tl];
		str[tl] = str[i-1];
		str[i-1] = s;
		tl++;
		i--;
	}
	return(str);
}
#include <stdio.h>
int main()
{
	char	str[] = "qwerty123456";
	printf("%s\n", ft_strrev(str));
}
