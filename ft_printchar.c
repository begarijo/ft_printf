/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:20:40 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/24 11:42:13 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*It's like putchar, the only difference is the pointer to lenght added as 
 * parameter.
 *
 * This lenght is needed to return in the principal function the total value.
 * That's why is passed as param, because it has to be "saved" in somewhere.*/

void	ft_printchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
