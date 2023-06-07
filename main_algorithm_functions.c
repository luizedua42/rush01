/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algorithm_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:19:58 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 11:20:35 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static int	col_function(char **matrix, char ***meta, int *curr, int prev);
static int	line_function(char **matrix, char ***meta, int *curr, int prev);
static void	del_last_col(char **matrix, int *curr);
static void	del_last_line(char **matrix, int *curr);

void	rush01_algorithm(char **matrix, char ***meta)
{
	int	current_point[2];

	current_point[0] = 0;
	current_point[1] = 0;
	if (-1 == line_function(matrix, meta, current_point, 0))
		error();
	else
		print_inner_matrix(matrix);
}

static void	del_last_line(char **matrix, int *curr)
{
	int	i;
	int	j;

	i = 0;
	j = curr[X];
	if (curr[Y] == 1)
		return ;
	while (i != curr[Y] - 1)
		i++;
	while (j != 5)
		matrix[i][j++] = 'x';
}

static void	del_last_col(char **matrix, int *curr)
{
	int	i;
	int	j;

	i = curr[Y];
	j = 0;
	if (curr[X] == 1)
		return ;
	while (j != curr[X] - 1)
		j++;
	while (i != 5)
		matrix[i++][j] = 'x';
}

static int	line_function(char **matrix, char ***meta, int *curr, int prev)
{
	int		line_pair[2];
	char	*string;
	char	line_prefix[5];

	ft_bzero(line_prefix, 5);
	if (-1 == set_point(matrix, curr) || 0 == set_point(matrix, curr))
		return (set_point(matrix, curr));
	set_line_prefix(matrix, curr, line_prefix);
	set_line_pair(line_pair, matrix, curr);
	string = get_row_string(line_pair, meta, line_prefix, prev);
	if (string)
	{
		fill_line(matrix, curr, string);
		if (-1 == col_function(matrix, meta, curr, 0))
			return (-1);
	}
	else if (!string)
	{
		del_last_col(matrix, curr);
		set_line_prefix(matrix, curr, line_prefix);
		if (-1 == col_function(matrix, meta, curr, 1))
			return (-1);
	}
	return (0);
}

static int	col_function(char **matrix, char ***meta, int *curr, int prev)
{
	char	*string;
	int		col_pair[2];
	char	col_prefix[5];

	ft_bzero(col_prefix, 5);
	if (!set_point(matrix, curr))
		return (0);
	set_col_prefix(matrix, curr, col_prefix);
	set_col_pair(col_pair, matrix, curr);
	string = get_col_string(col_pair, meta, col_prefix, prev);
	if (string)
	{
		fill_collumn(matrix, curr, string);
		if (-1 == line_function(matrix, meta, curr, 0))
			return (-1);
	}
	else if (!string)
	{
		del_last_line(matrix, curr);
		if (-1 == line_function(matrix, meta, curr, 1))
			return (-1);
	}
	return (0);
}
