/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baorabi <baraa.orabi@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:30:01 by baorabi           #+#    #+#             */
/*   Updated: 2025/12/16 17:41:59 by baorabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int				i;
	unsigned long	container;

	i = 0;
	if (!ptr)
	{
		i += ft_print_str("(nil)");
		return (i);
	}
	container = (unsigned long) ptr;
	i += ft_print_str("0x");
	i += ft_print_hex((unsigned long)container, 0);
	return (i);
}
