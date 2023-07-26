/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_activities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:36:33 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 22:39:02 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	failtests(int count, char *chain, int fd, int *total_bytes)
{
	if (count == -1)
	{
		write (1, "Dict error\n", 11);
		free(chain);
		close(fd);
	}
	*total_bytes = count;
}

void	ft_open(int *fd)
{
	*fd = open("numbers.dict", O_RDONLY);
	if (*fd == -1)
	{
		write (1, "Dict error\n", 11);
	}
}

void	theend(int fd, int total_bytes, char *str, char *chain)
{
	close(fd);
	str[total_bytes] = '\0';
	write(1, str, total_bytes);
	free(chain);
}

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
