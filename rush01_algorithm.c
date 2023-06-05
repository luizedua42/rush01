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
#include <string.h>

static void	col_function(char **matrix, char ***meta, int *curr, int prev,
				char *line_prefix);

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
	// if (4 == (current_point)[X] && 4 == (current_point)[Y])
	// {
	// 	(current_point)[Y] = -1;
	// 	(current_point)[X] = -1;
	// 	return ;
	// }
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
	j = 1;
	k = 0;
	while (i != current_point[Y])
		i++;
	if ('x' == matrix[i][1])
	{
		prefix = NULL;
		return ;
	}
	while (j < 5)
	{
		prefix[k] = matrix[i][j];
		k++;
		j++;
	}
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

static void	set_line_pair(int *pair, char **matrix, int *current_point)
{
	int	i;

	i = 0;
	while (i != current_point[Y])
		i++;
	pair[LEFT] = matrix[i][0] - '0';
	pair[RIGHT] = matrix[i][5] - '0';
}

static void	set_col_pair(int *pair, char **matrix, int *current_point)
{
	int	j;

	j = 0;
	while (j != current_point[X])
		j++;
	pair[UP] = matrix[0][j] - '0';
	pair[DOWN] = matrix[5][j] - '0';
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

static void	del_line(char **matrix, int *curr, char *last_prefix)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i != curr[Y] - 1)
		i++;
	while (j < 5)
	{
		matrix[i][j] = last_prefix[j - 1];
		j++;
	}
}

static void	del_col(char **matrix, int *curr, char *last_prefix)
{
	int	j;
	int	i;

	j = 0;
	i = 1;
	while (j != curr[X] - 1)
		j++;
	while (i < 5)
	{
		matrix[i][j] = last_prefix[i - 1];
		i++;
	}
}

static void	line_function(char **matrix, char ***meta, int *curr, int prev,
		char *col_prefix)
{
	int			line_pair[2];
	static char	line_prefix[5];
	char		last_line_prefix[5];
	char		*string;

	print_matrix(matrix, 6);
	set_current_point(matrix, curr);
	if (*line_prefix)
		strncpy(last_line_prefix, line_prefix, 5);
	set_line_prefix(matrix, curr, line_prefix);
	set_line_pair(line_pair, matrix, curr);
	string = get_row_string(line_pair, meta, line_prefix, prev);
	if (string)
	{
		fill_line(matrix, curr, string);
		col_function(matrix, meta, curr, 0, line_prefix);
	}
	else if (!string)
	{
		del_col(matrix, curr, col_prefix);
		set_line_prefix(matrix, curr, line_prefix);
		print_matrix(matrix, 6);
		col_function(matrix, meta, curr, 1, last_line_prefix);
	}
}

static void	col_function(char **matrix, char ***meta, int *curr, int prev,
		char *line_prefix)
{
	int			col_pair[2];
	static char	col_prefix[5];
	char		last_col_prefix[5];
	char		*string;

	print_matrix(matrix, 6);
	set_current_point(matrix, curr);
	if (*col_prefix)
		strncpy(last_col_prefix, col_prefix, 5);
	set_col_prefix(matrix, curr, col_prefix);
	set_col_pair(col_pair, matrix, curr);
	string = get_col_string(col_pair, meta, col_prefix, prev);
	if (string)
	{
		fill_collumn(matrix, curr, string);
		line_function(matrix, meta, curr, 0, col_prefix);
	}
	else if (!string)
	{
		del_line(matrix, curr, line_prefix);
		set_col_prefix(matrix, curr, col_prefix);
		print_matrix(matrix, 6);
		line_function(matrix, meta, curr, 1, last_col_prefix);
	}
}

void	rush01_algorithm(char **matrix, char ***meta)
{
	int	*current_point;

	current_point = malloc(2 * sizeof(int));
	line_function(matrix, meta, current_point, 0, NULL);
	free(current_point);
}
