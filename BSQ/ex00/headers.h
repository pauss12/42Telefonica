/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmendez- <pmendez-@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:56:53 by pmendez-          #+#    #+#             */
/*   Updated: 2023/07/26 17:33:53 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct t_data{
	char	full;
	char	varnothing;
	char	obs;
	int		numberlines;
	int		numbercolumns;
	int		tamsize;
}t_data;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_cat(void);
void	ft_putnbr(int nb);
void	ft_display_file(int i, int fd, int argc, char **argv);
void	ft_get_second_line(int fd);
void	ft_print_names(int i, int argc, char **argv);
void	ft_print_solution(int i, char **argv);
char	ft_get_char_void(char *argv);
char	ft_get_char_obst(char *argv);
char	ft_get_char_full(char *argv);
char	*ft_strcpy(char *dest, char *src);
char	**ft_read_file(char *argv);
//char	**ft_fill_map(char **map, int c, t_data data);
int		ft_strlen(char *str);
int		ft_get_number_lines(char *argv);
int		ft_get_number_columns(char *argv);
int		ft_verif_chars(char *argv);
int		ft_verif_columns(char *argv);
int		ft_verif_returns(char *argv);
int		ft_verif_map(char *argv);
int		ft_get_next_columns(char *argv, int fd);
int		ft_atoi(char *str);
int		ft_size_file(char *argv);
int		ft_min(int a, int b, int c);
int		**ft_generate_map(int l, int c);
int		ft_biggest_square(char **map, int c, int l, char o);
int		ft_find_position_square(char **map, int c, int l, char o);

#endif
