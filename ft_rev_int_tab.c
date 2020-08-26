/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchopin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:14:00 by gchopin           #+#    #+#             */
/*   Updated: 2020/02/10 17:20:14 by gchopin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int x;

	x = 0;
	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		swap(&tab[i], &tab[j]);
		i = i + 1;
		j = j - 1;
	}
}
