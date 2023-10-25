/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moseffar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:03:01 by moseffar          #+#    #+#             */
/*   Updated: 2023/09/28 21:17:18 by moseffar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char *ft_rev_print (char *str)
{
	int	i = 0;

	while(str[i])
	{
		i++;
	}
	i = i -1;
	while(i>=0)
	{
		write(1, &str[i], 1);
	   i--;	
	}
	write(1, "\n", 1);
	return (str);
}
int main()
{
	char	str[] = "";
	ft_rev_print(str);
}
