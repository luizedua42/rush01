/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:36:11 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 10:36:23 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	set_current_point(char **matrix, int *current_point)
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
				return (1);
			}
		}
	}
	return (0);
}

void	set_line_prefix(char **matrix, int *current_point, char *prefix)
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
		prefix = "xxxx";
		return ;
	}
	while (j < 5)
	{
		prefix[k] = matrix[i][j];
		k++;
		j++;
	}
}
