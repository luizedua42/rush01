/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/01 11:08:47 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	main(int argc, char **argv)
{
	char	**matrix;

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
	print_matrix(matrix);
}
