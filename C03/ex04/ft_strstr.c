/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:20:40 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/21 12:28:46 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char	*str, char *to_find)
{
	int	contador1;
	int	contador2;
	int	contador;

	contador1 = 0;
	contador2 = 0;
	contador = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[contador2] != '\0')
	{
		contador = contador2;
		contador1 = 0;
		while (str[contador] == to_find[contador1])
		{
			if (to_find[contador1 + 1] == '\0')
			{
				return (&str[contador2]);
			}
			contador++;
			contador1++;
		}
		contador2++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	cadena1[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char	subcadena[] = "abcd";
	char	*encontrada;

	encontrada = ft_strstr(cadena1, subcadena);
	printf("%s\n", encontrada);
	return (0);
}
*/
