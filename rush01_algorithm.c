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

void	rush01_algorithm(char **matrix, char ***meta)
{
	int	*current_point;

	(void)meta;
	current_point = malloc(2 * sizeof(int));
	set_current_point(matrix, current_point);
	print_matrix(matrix, 6);
	printf("%d\n", current_point[X]);
	printf("%d\n", current_point[Y]);

	matrix[current_point[Y]][current_point[X]] = '1';
	print_matrix(matrix, 6);
	set_current_point(matrix, current_point);
	printf("%d\n", current_point[X]);
	printf("%d\n", current_point[Y]);
	free(current_point);
}
