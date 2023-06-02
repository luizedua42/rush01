/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:48:26 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/01 17:19:43 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		error(void);
int		cols_are_valid(char **args);
int		lines_are_valid(char **args);
int		lines_are_valid(char **args);
char	**init_matrix(char **argv);
void	putspaces(void);
void	putspace(void);
void	ft_putchar(char c);
int		input_is_valid(char **argv);
char	**c_1xxxx2(void);
char	**c_1xxxx3(void);
char	**c_1xxxx4(void);
char	**c_2xxxx2(void);
char	**c_2xxxx3(void);
char	**c_3xxxx1(void);
char	**c_3xxxx2(void);
char	**c_4xxxx1(void);
char	***init_meta_matrix(void);
int		check_prefix(char *s1, char *prefix);
char	*get_string(int left_up, int right_down, char ***meta, char *prefix);
void	free_matrix(char **matrix, int height);
void	print_matrix(char **borders, int height, int witdh);

#endif
