/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <bsomers@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 19:15:11 by bsomers       #+#    #+#                 */
/*   Updated: 2022/01/26 17:52:08 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_info
{
	int	ret;
	int	flag;
	int	i;
}				t_info;

int	ft_printf(const char *fmt, ...);
int	ft_conv_x(va_list args, t_info *ret, char fmt_i);
int	ft_dectohex_low(unsigned int dec, t_info *ret);
int	ft_dectohex_up(unsigned int dec, t_info *ret);
int	ft_conv_u(va_list args, t_info *ret);
int	ft_conv_p(va_list args, t_info *ret);
int	ft_conv_c(va_list args, t_info *ret);
int	ft_conv_s(va_list args, t_info *ret);
int	ft_conv_di(va_list args, t_info *ret);

#endif