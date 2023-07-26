/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:14:09 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 23:22:30 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_pow(int exp)
{
	int	result;
	int	num;

	num = 10;
	result = 1;
	while (exp > 0)
	{
		result = result * num;
		exp--;
	}
	return (result);
}

int	count_digits(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
		num = -num;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	*separate_digits(int num)
{
	int	contador;
	int	num_digits;
	int	*digits;
	int	index;

	num_digits = count_digits(num);
	digits = malloc(num_digits * sizeof(int));
	index = num_digits - 1;
	contador = 0;
	while (num != 0)
	{
		digits[index--] = num % 10;
		num /= 10;
	}
	while (contador < num_digits)
	{
		digits[contador] = digits[contador] * ft_pow(num_digits - 1 - contador);
		contador++;
	}
	return (digits);
}
