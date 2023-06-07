/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:48:26 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 11:34:36 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define LEFT 0
# define RIGHT 1
# define UP 0
# define DOWN 1
# define X 0
# define Y 1
# define NOT_PREV 0
# define PREV 1

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
char	**c_2xxxx1(void);
char	***init_meta_matrix(void);
int		check_prefix(char *s1, char *prefix);
char	*get_row_string(int pair[2], char ***meta, char *prefix, int prev);
char	*get_col_string(int pair[2], char ***meta, char *prefix, int prev);
void	free_meta_matrix(char ***meta);
void	free_matrix(char **matrix);
void	print_matrix(char **matrix, int width);
void	rush01_algorithm(char **borders_matrix, char ***meta_matrix);
void	print_matrix_fd(char **matrix, int width, int fd);
void	set_col_prefix(char **matrix, int *current_point, char *prefix);
void	set_line_pair(int *pair, char **matrix, int *current_point);
void	set_col_pair(int *pair, char **matrix, int *current_point);
void	fill_collumn(char **matrix, int *curr, char *string);
void	fill_line(char **matrix, int *curr, char *string);
int		set_current_point(char **matrix, int *current_point);
void	set_line_prefix(char **matrix, int *current_point, char *prefix);
void	ft_bzero(char str[], int size);

char	*get_1xxxx2_row_string(char ***meta, char *prefix, int prev);
char	*get_1xxxx3_row_string(char ***meta, char *prefix, int prev);
char	*get_1xxxx4_row_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx1_row_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx2_row_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx3_row_string(char ***meta, char *prefix, int prev);
char	*get_3xxxx1_row_string(char ***meta, char *prefix, int prev);
char	*get_3xxxx2_row_string(char ***meta, char *prefix, int prev);
char	*get_4xxxx1_row_string(char ***meta, char *prefix, int prev);

char	*get_1xxxx2_col_string(char ***meta, char *prefix, int prev);
char	*get_1xxxx3_col_string(char ***meta, char *prefix, int prev);
char	*get_1xxxx4_col_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx1_col_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx2_col_string(char ***meta, char *prefix, int prev);
char	*get_2xxxx3_col_string(char ***meta, char *prefix, int prev);
char	*get_3xxxx1_col_string(char ***meta, char *prefix, int prev);
char	*get_3xxxx2_col_string(char ***meta, char *prefix, int prev);
char	*get_4xxxx1_col_string(char ***meta, char *prefix, int prev);
void	print_inner_matrix(char **matrix);

#endif
