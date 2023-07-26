/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:04:28 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/23 22:44:54 by pmendez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	readtext(int fd, int i, char *str);

void	comprobacion(int number, char *cadena, int fd, int i)
{
	if (number < 0)
		write(1, "ERROR\n", 6);
	else
	{
		readtext(fd, i, cadena);
		//numberSearch(number, cadena);
	}
}

int	main(int argc, char *argv[])
{
	int		number;
	int		fd;
	char	*cadena;
	int		i;
	int		j;

	fd = 0;
	j = 0;
	i = 0;
	cadena = malloc(50 * sizeof(int));
	if (argc == 2)
	{	
		number = ft_atoi(argv[1]);
		comprobacion(number, cadena, fd, i);
	}
	else if (argc == 3)
	{
		number = ft_atoi(argv[2]);
		fd = open(argv[1], O_RDONLY);
		close(fd);
	}
	else
		write(1, "ERROR\n", 6);
	free(cadena);
	return (0);
}
