/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:06:39 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 23:14:04 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_digits(int num);

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

int	ft_atoi(char *str)
{
	int	signo;
	int	result;
	int	i;
	int	num_signo_menos;

	i = 0;
	result = 0;
	signo = 1;
	num_signo_menos = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (calcular_signo(num_signo_menos, str, &i) % 2 != 0)
		signo = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}	
	return (result * signo);
}

void	inttochararray(int *intarray, int arraysize, char *chararray)
{
	int	offset;
	int	contador;
	int	numdigits;
	int	tempnum;
	int	j;

	contador = 0;
	offset = 0;
	j = 0;
	while (contador < arraysize)
	{
		numdigits = count_digits(intarray[contador]);
		tempnum = intarray[contador];
		while (j < numdigits - 1)
		{
			chararray[offset + j] = '0' + tempnum % 10;
			tempnum /= 10;
			j--;
		}
		chararray[offset + numdigits] = '\0';
		offset += numdigits + 1;
		contador++;
	}
}
