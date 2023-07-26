/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:19:03 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/12 16:35:01 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	auxiliar;

	contador = 0;
	while (contador < size / 2)
	{
		auxiliar = tab[contador];
		tab[contador] = tab[size - contador - 1];
		tab[size - contador - 1] = auxiliar;
		contador++;
	}
}
