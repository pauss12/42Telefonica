/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:10:43 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/20 10:44:00 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	contador;
	int	tamsrc;

	contador = 0;
	while (contador < size - 1 && src[contador] != '\0')
	{
		dest[contador] = src[contador];
		contador++;
	}
	dest[contador] = '\0';
	tamsrc = 0;
	while (src[tamsrc] != '\0')
	{
		tamsrc++;
	}
	return (tamsrc);
}
/*
int main(void) {
    char dest[10];
    char src[] = "Hello, world!";

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Cadena de destino: %s\n", dest);
    printf("Longitud de la cadena de origen: %u\n", len);
    
    return 0;
}
*/
