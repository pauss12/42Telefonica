/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:02:41 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/12 21:07:12 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	comprobacion(char *str)
{
	if (str[contador] == '+')
	{
		contador++;
		if (str[contador] >= 'a' && str[contador] <= 'z')
		{
			str[contador] -= 32;
		}	
	}	
}

char	*ft_strcapitalize(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
			contador++;
		}
		if (str[contador] == ' ')
		{
			contador++;
			if (str[contador] >= 'a' && str[contador] <= 'z')
			{
				str[contador] -= 32;
			}	
		}
		comprobacion(str);
		contador++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str2;

	str2 = ft_strcapitalize(str);
	printf("%s", str2);

	return (0);
}
*/
