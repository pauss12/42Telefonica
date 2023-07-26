/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:24:59 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 12:12:26 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (((s1[contador] != '\0') || (s2[contador] != '\0')) && (contador < n))
	{
		if (s1[contador] > s2[contador])
		{
			return (1);
		}
		else if (s1[contador] < s2[contador])
		{
			return (-1);
		}
		contador++;
	}
	return (0);
}
/*
int	main(void)
{
	int numero;
	char *str1 = "Hella";
    char *str2 = "Hello";

	numero = ft_strncmp(str1, str2, 5);

	printf("Resultado: %d\n", numero);
	return (0);
}
*/
