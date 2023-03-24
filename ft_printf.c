/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:34:53 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/24 11:40:19 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function checks which conversion is needed, and then call the
 * function that changes the format.
 *
 * As the function is going to recieve a string, where it's going to be 
 * the correpondient letter, it also recieve the variatics arguments, that is going to
 * move arg by arg.
 *
 * Then, at last it recieve the lenght of bytes printed, because the
 * standard printf returns this value.*/

static void	ft_checkform(const char s, va_list args, int *len)
{
	if (s == 's')
		ft_printstr(va_arg(args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_printnumber(va_arg(args, int), len);
	else if (s == 'u')
		ft_printunsigned(va_arg(args, unsigned int), len);
	else if (s == 'x' || s == 'X')
		ft_printhexa(va_arg(args, unsigned int), len, s);
	else if (s == 'p')
		ft_printptr(va_arg(args, void *), len);
	else if (s == 'c')
		ft_printchar(va_arg(args, int), len);
	else if (s == '%')
		ft_printchar('%', len);
}

/*It only recieve a string, which is going to convert in any value needed.
 * Also, it recieve '...', which means it's going to be args, but
 * don't know how many.
 *
 * As it's not known the amount of args, with va_list, it declares
 * it's going to be a list of args, and it needs to initialize (va_start(args, s)),
 * and then, once it's over, it needs to end (va_end(args)).
 * The function moves in the args one by one, once it's done with one, passes to the next.*/

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			ft_checkform(s[i], args, &len);
			i++;
		}
		else
		{
			ft_printchar((char)s[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
