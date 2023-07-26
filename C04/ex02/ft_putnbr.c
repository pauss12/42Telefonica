/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:19:35 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 10:59:24 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

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
/*
int	main(void)
{
	ft_putnbr(-1);
	return (0);
}
*/
