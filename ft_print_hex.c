/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baorabi <baraa.orabi@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:18:53 by baorabi           #+#    #+#             */
/*   Updated: 2025/12/16 17:36:47 by baorabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, int iscap)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (iscap)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_print_hex(nb / 16, iscap);
		count += ft_print_hex(nb % 16, iscap);
	}
	else
		count += ft_print_char(base[nb]);
	return (count);
}
