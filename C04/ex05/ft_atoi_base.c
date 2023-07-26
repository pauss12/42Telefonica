/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:56:41 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/24 18:44:02 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == NULL || ft_strlen(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	calcular_signo(int num_signo_menos, char *str, int *i)
{
	while (str[*i] != '\0' && (str[*i] == '+' || str[*i] == '-'))
	{
		if (str[*i] == '-')
			num_signo_menos += 1;
		*i = *i + 1;
	}
	return (num_signo_menos);
}

int	ft_atoi(char *str, char *base)
{
	int	signo;
	int	result;
	int	i;
	int	num_signo_menos;
	int	len_base;

	i = 0;
	result = 0;
	signo = 1;
	num_signo_menos = 0;
	len_base = ft_strlen(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (calcular_signo(num_signo_menos, str, &i) % 2 != 0)
		signo = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * len_base + (str[i] - '0');
		i++;
	}
	return (result * signo);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	digito;

	digito = 0;
	result = 0;
	if (checkbase(base) == 1)
		result = ft_atoi(str, base);
	return (result);
}
/*
int	main(void)
{
	int num;

	num = ft_atoi_base("1A3", "0123456789ABCDEF");
	printf("%d\n", num);
	return (0);
}
*/
