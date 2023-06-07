/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:31:41 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 10:32:08 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	set_col_prefix(char **matrix, int *current_point, char *prefix)
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
		prefix = "xxxx";
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

void	fill_collumn(char **matrix, int *curr, char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		matrix[i + 1][curr[X]] = string[i];
		i++;
	}
}

void	fill_line(char **matrix, int *curr, char *string)
{
	int	j;

	j = 0;
	while (string[j])
	{
		matrix[curr[Y]][j + 1] = string[j];
		j++;
	}
}
