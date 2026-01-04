/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baorabi <baraa.orabi@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:05:30 by baorabi           #+#    #+#             */
/*   Updated: 2025/12/16 18:00:06 by baorabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += ft_print_unsigned(nb / 10);
		i += ft_print_unsigned(nb % 10);
	}
	else
	{
		i += ft_print_char(nb + 48);
	}
	return (i);
}
