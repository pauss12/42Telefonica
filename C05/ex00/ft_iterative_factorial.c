/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:57:31 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:57 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	if (nb <= -1)
		return (0);
}

int	main(void)
{
	int	num;

	num = ft_iterative_factorial(6);
	printf("El factorial del numero es: %d\n", num);
}
