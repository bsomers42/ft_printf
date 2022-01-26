/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   conv_u.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 19:17:33 by bsomers       #+#    #+#                 */
/*   Updated: 2022/01/26 17:21:18 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putuns(unsigned int u, t_info *ret)
{
	ret->ret++;
	if (u > 9)
		ft_putuns(u / 10, ret);
	u = u % 10;
	ft_putchar_fd((u % 10) + '0', 1);
	return (ret->ret);
}

int	ft_conv_u(va_list args, t_info *ret)
{
	unsigned int	arg_u;

	arg_u = va_arg(args, unsigned int);
	ft_putuns(arg_u, ret);
	return (ret->ret);
}
