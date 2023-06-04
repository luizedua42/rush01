/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:05:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/03 21:34:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static void	fill_curr_point(char **matrix, int *current_point, char c)
{
	matrix[current_point[Y]][current_point[X]] = c;
}

static void	set_current_point(char **matrix, int *current_point)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (4 == (current_point)[X] && 4 == (current_point)[Y])
	{
		(current_point)[Y] = -1;
		(current_point)[X] = -1;
		return ;
	}
	while (++i < 6)
	{
		j = -1;
		while (++j < 6)
		{
			if ('x' == matrix[i][j])
			{
				(current_point)[Y] = i;
				(current_point)[X] = j;
				return ;
			}
		}
	}
}

static void	set_line_prefix(char **matrix, int *current_point, char *prefix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = -1;
	while (i != current_point[Y])
		i++;
	if ('x' == matrix[i][1])
	{
		prefix = NULL;
		return ;
	}
	while (j < 5)
		prefix[++k] = matrix[i][++j];
}

static void	set_col_prefix(char **matrix, int *current_point, char *prefix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = -1;
	while (j != current_point[X])
		j++;
	if ('x' == matrix[1][j])
	{
		prefix = NULL;
		return ;
	}
	while (i < 5)
		prefix[++k] = matrix[++i][j];
	prefix[k] = '\0';
}

void	set_line_pair(int *pair, char **matrix, int *current_point)
{
	int	i;

	i = 0;
	while (i != current_point[Y])
		i++;
	pair[LEFT] = matrix[i][0] - '0';
	pair[RIGHT] = matrix[i][5] - '0';
}

void	set_col_pair(int *pair, char **matrix, int *current_point)
{
	int	j;

	j = 0;
	while (j != current_point[X])
		j++;
	pair[UP] = matrix[0][j] - '0';
	pair[DOWN] = matrix[5][j] - '0';
}

void	line_function(char **matrix, char ***meta, int *curr, char *prefix)
{
	int	*line_pair;

	(void)meta;
	line_pair = malloc(2 * sizeof(int));
	set_current_point(matrix, curr);
	set_line_prefix(matrix, curr, prefix);
	set_line_pair(line_pair, matrix, curr);
	free(line_pair);
}

static void	fill_collumn(char **matrix, int *curr, char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		matrix[i + 1][curr[X]] = string[i];
		i++;
	}
}

static void	fill_line(char **matrix, int *curr, char *string)
{
	int	j;

	j = 0;
	while (string[j])
	{
		matrix[curr[Y]][j + 1] = string[j];
		j++;
	}
}

void	col_function(char **matrix, char ***meta, int *curr, char *prefix)
{
	int		*col_pair;
	char	*string;

	(void)meta;
	col_pair = malloc(2 * sizeof(int));
	set_current_point(matrix, curr);
	set_col_prefix(matrix, curr, prefix);
	set_col_pair(col_pair, matrix, curr);
	print_matrix(matrix, 6);
	string = get_col_string(col_pair, meta, prefix, NOT_PREV);
	if (string)
		fill_collumn(matrix, curr, string);
	fill_line(matrix, curr, string);
	print_matrix(matrix, 6);
	free(col_pair);
}

void	rush01_algorithm(char **matrix, char ***meta)
{
	int		*current_point;
	char	*prefix;

	(void)meta;
	current_point = malloc(2 * sizeof(int));
	prefix = malloc(5 * sizeof(char));
	line_function(matrix, meta, current_point, prefix);
	col_function(matrix, meta, current_point, prefix);
	free(current_point);
	free(prefix);
}
