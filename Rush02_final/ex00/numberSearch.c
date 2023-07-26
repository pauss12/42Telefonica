/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numberSearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:31:13 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 22:32:23 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_digits(int num);
int	*separate_digits(int num);
void	inttochararray(int *intarray, int arraysize, char *chararray);

void	numbersearch(int numero, char *cadena)
{
	int	len;
	int	*array;
	int	cont;

	cont = 0;
	len = (count_digits(numero));
	array = separate_digits(numero);
	inttochararray(array, len, cadena);
}
