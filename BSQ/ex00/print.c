/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:01:29 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 15:01:50 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	signo(int *nb)
{
	write(1, "-", 1);
	*nb = *nb * (-1);
}

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		signo(&nb);
	}
	if (nb < 10 && nb > -1)
	{
		num = nb + '0';
		write(1, &num, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
