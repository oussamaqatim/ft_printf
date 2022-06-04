/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:22:17 by oqatim            #+#    #+#             */
/*   Updated: 2021/12/27 14:49:39 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *ptr, int *p)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		*p += write(1, "(null)", 6);
		return ;
	}
	while (ptr[i] != '\0')
	{
		ft_putchar(ptr[i], p);
		i++;
	}
}