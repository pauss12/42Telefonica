/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:45:05 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/09 16:55:03 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	auxiliar;

	auxiliar = *a;
	*a = *b;
	*b = auxiliar;
}
/*
int main()
{
    int num1 = 10;
    int num2 = 20;

    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2);

    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/
