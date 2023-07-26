/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:38:39 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 22:11:22 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
		contador++;
	return (contador);
}

int	main(int argc, char *argv[])
{
	int	contador;

	contador = argc;
	if (argc >= 1)
	{
		while (contador > 1)
		{
			write(1, argv[contador - 1], ft_strlen(argv[contador - 1]));
			write(1, "\n", 1);
			contador--;
		}
	}
	return (0);
}
