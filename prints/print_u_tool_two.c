/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u_tool_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <gchopin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 11:41:33 by gchopin           #+#    #+#             */
/*   Updated: 2020/09/02 11:42:35 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	calc_u(ssize_t width, ssize_t w_spec, ssize_t lensize, unsigned int u)
{
	ssize_t	size;

	size = width - lensize;
	if (w_spec >= 0)
	{
		if (w_spec - lensize > 0)
			size = size - (w_spec - lensize);
		if (u < 0 && w_spec > lensize)
			size--;
	}
	return (size);
}
