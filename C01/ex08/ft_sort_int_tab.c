/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:44:06 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/11 10:25:34 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	intercambiar(int *valor1, int *valor2)
{
	int	temporal;

	temporal = *valor1;
	*valor1 = *valor2;
	*valor2 = temporal;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	temporal1;
	int	temporal2;

	temporal1 = 0;
	while (temporal1 < size)
	{
		temporal2 = temporal1;
		while (temporal2 < size)
		{
			if (tab[temporal1] > tab[temporal2])
			{
				intercambiar (&tab[temporal1], &tab[temporal2]);
			}
			temporal2++;
		}
		temporal1++;
	}
}
