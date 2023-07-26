/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:03:18 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 21:23:24 by pmendez-         ###   ########.fr       */
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
	int		len;
	char	*cadena;

	cadena = argv[0];
	if (argc >= 1)
	{
		len = ft_strlen(cadena);
		write(1, cadena, len);
		write(1, "\n", 1);
	}	
	return (0);
}
