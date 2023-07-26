/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:23:56 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 21:38:22 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}

int	main(int argc, char *argv[])
{
	int	contador;

	contador = 1;
	if (argc >= 1)
	{
		while (contador < argc)
		{
			write(1, argv[contador], ft_strlen(argv[contador]));
			write(1, "\n", 1);
			contador++;
		}
	}
	return (0);
}
