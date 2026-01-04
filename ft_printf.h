/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baorabi <baraa.orabi@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:54:32 by baorabi           #+#    #+#             */
/*   Updated: 2025/12/16 19:46:26 by baorabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned long nb, int iscap);
int	ft_print_ptr(void *ptr);
int	ft_print_nbr(int nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif
