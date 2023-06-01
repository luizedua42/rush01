/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/01 16:32:53 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	main(int argc, char **argv)
{
	char	**matrix;
	char	***meta_matrix;

	if (1 == argc)
		return (1);
	if (!input_is_valid(argv))
		return (error());
	matrix = init_matrix(argv);
	if (!lines_are_valid(matrix) || !cols_are_valid(matrix))
	{
		free_matrix(matrix, 4);
		return (error());
	}
	meta_matrix = init_meta_matrix();
	print_matrix(meta_matrix[0], 4);
}
