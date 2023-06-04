/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:05:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/03 20:06:04 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

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
	printf("current_point: line: %d, col: %d\n", current_point[Y], current_point[X]);
	while (i != current_point[Y])
		i++;
	if ('x' == matrix[i][1])
	{
		prefix = NULL;
		printf("line prefix: %s\n", prefix);
		return ;
	}
	while (j < 5)
		prefix[++k] = matrix[i][++j];
	prefix[k] = '\0';
	printf("current_point: line: %d, col: %d\n", current_point[Y], current_point[X]);
	printf("line prefix: %s\n", prefix);
}

static void	set_col_prefix(char **matrix, int *current_point, char *prefix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = -1;
	printf("current_point: line: %d, col: %d\n", current_point[Y], current_point[X]);
	while (j != current_point[X])
		j++;
	if ('x' == matrix[1][j])
	{
		prefix = NULL;
		printf("col_prefix: %s\n", prefix);
		return ;
	}
	while (i < 5)
		prefix[++k] = matrix[++i][j];
	prefix[k] = '\0';
	printf("current_point: line: %d, col: %d\n", current_point[Y], current_point[X]);
	printf("col_prefix: %s\n", prefix);
}


void	line_function(char **matrix, char ***meta, int *curr, char *prefix)
{
	(void)meta;
	set_current_point(matrix, curr);
	matrix[curr[Y]][curr[X]] = '3';
	set_current_point(matrix, curr);
	matrix[curr[Y]][curr[X]] = '2';
	set_current_point(matrix, curr);
	matrix[curr[Y]][curr[X]] = '4';
	set_current_point(matrix, curr);
	matrix[curr[Y]][curr[X]] = '1';
	set_line_prefix(matrix, curr, prefix);
}

void	col_function(char **matrix, char ***meta, int *curr, char *prefix)
{
	(void)meta;
	set_current_point(matrix, curr);
	set_col_prefix(matrix, curr, prefix);
}

void	rush01_algorithm(char **matrix, char ***meta)
{
	int		*current_point;
	char	*prefix;

	(void)meta;
	current_point = malloc(2 * sizeof(int));
	prefix = malloc(5 * sizeof(char));
	line_function(matrix, meta, current_point, prefix);
	print_matrix(matrix, 6);
	col_function(matrix, meta, current_point, prefix);
	print_matrix(matrix, 6);
	free(current_point);
}
