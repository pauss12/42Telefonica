/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:06:43 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 20:11:22 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	contador;
	unsigned int	contador2;
	unsigned int	contador1;
	unsigned int	cuantoscopio;

	contador1 = 0;
	contador2 = 0;
	contador = 0;
	cuantoscopio = 0;
	while (dest[contador2] != '\0')
		contador2++;
	cuantoscopio = size - contador2;
	while (dest[contador1] != '\0' && contador1 < cuantoscopio)
	{
		dest[contador2] = src[contador1];
		contador1++;
		contador2++;
	}
	while (contador2 < size)
		dest[contador2] = '\0';
	while (dest[contador] != '\0')
		contador++;
	return (contador);
}
/*
int	main(void)
{
	char	src[] = "tal estas";
    char	dest[20] = "hola que ";
	unsigned int numero;

	numero = ft_strlcat(dest, src, 12);
	printf("La cadena de destino es: %s\n", dest);
	printf("El numero es %d\n", numero);
	return (0);
}
*/
