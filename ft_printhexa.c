/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:26:23 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/24 11:51:46 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*As the hexadecimal can be in lower or upper case, is needed a param that
 * controls this.
 *
 * The base is passed, and it change by the position in the base.*/

void	ft_printhexa(unsigned long n, int *len, char x)
{
	char	str[16];
	char	*base;
	int		i;

	i = 0;
	if (x == 'x')
		base = "0123456789abcdef";
	if (x == 'X')
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_printchar('0', len);
		return ;
	}
	while (n != 0)
	{
		str[i] = base[n % 16];
		n /= 16;
		i++;
	}
	while (i--)
		ft_printchar(str[i], len);
}

/*Another way to do it:
 *
void	ft_printhexa(unsigned long n, int *len, char x)
{
	if (n >= 16)
	{
		ft_printhexa(n / 16, len, x);
		ft_printhexa(n % 16, len, x);
	}
	if (n < 10)
	{
		n = n + '0';
		ft_printchar(n, len);
	}
	else if (n < 16)
	{
		if (x == 'x')
			n = n - 10 + 'a';
		else if (x == 'X')
			n = n - 10 + 'A';
		ft_printchar(n, len);
	}
}
 * It's like a regular putnbr, but considering the base (16), and the lower or uppercase*/
