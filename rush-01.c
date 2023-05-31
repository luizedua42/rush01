/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/31 18:18:11 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	main(int argc, char **argv)
{
	char	**matrix;

	if (1 == argc)
		return (1);
	matrix = init_matrix(argv);
	if (!lines_are_valid(matrix) && cols_are_valid(matrix))
	{
		printf("error\n");
		free_matrix(matrix, 4);
		return (0);
	}
	// print_borders(matrix, 4);
}
