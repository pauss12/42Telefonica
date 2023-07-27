/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:50:47 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/27 16:46:02 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	contador;
	int	i;
	int	size;

	size = max - min;
	i = 0;
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (0);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int	main(void)
{	
	int *numeros;	
	int solucion;
	int	contador;
	int max;
	int min;

	contador = 0;
	max = 6;
	min = 2;
	solucion = ft_ultimate_range(&numeros, min, max);

	while (contador < solucion)
	{
		printf("%d\n", numeros[contador]);
		contador++;
	}
	
	free(numeros);
	return (0);
}
*/
