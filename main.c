/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/03 20:06:47 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	main(int argc, char **argv)
{
	char	**borders_matrix;
	char	***meta_matrix;

	if (1 == argc)
		return (1);
	if (!input_is_valid(argv))
		return (error());
	borders_matrix = init_matrix(argv);
	if (!lines_are_valid(borders_matrix) || !cols_are_valid(borders_matrix))
	{
		free_matrix(borders_matrix);
		return (error());
	}
	meta_matrix = init_meta_matrix();
	rush01_algorithm(borders_matrix, meta_matrix);
	free_meta_matrix(meta_matrix);
	free_matrix(borders_matrix);
}
