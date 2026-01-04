/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baorabi <baraa.orabi@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:45:51 by baorabi           #+#    #+#             */
/*   Updated: 2025/12/16 17:42:53 by baorabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	len = 0;
	while (str[len])
	{
		len++;
		i++;
	}
	write(1, str, len);
	return (i);
}
