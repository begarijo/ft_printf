/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:42:22 by begarijo          #+#    #+#             */
/*   Updated: 2022/11/28 17:16:38 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_printchar(char c, int *len);
void	ft_printstr(char *str, int *len);
void	ft_printnumber(int n, int *len);
void	ft_printhexa(unsigned long n, int *len, char x);
void	ft_printunsigned(unsigned int n, int *len);
void	ft_printptr(void *ptr, int *len);
int		ft_printf(const char *s, ...);

#endif
