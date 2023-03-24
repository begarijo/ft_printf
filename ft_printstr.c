/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:21:37 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/24 11:43:45 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This one prints the str, adding the amount of char printed.
 * Also, if there's no str, prints "null"*/

void	ft_printstr(char *s, int *len)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_printstr("(null)", len);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_printchar(s[i], len);
		i++;
	}
}
