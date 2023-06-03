/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/03 14:14:04 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static void	print_matrix_name(int count)
{
	switch (count)
	{
	case 1:
		printf("matrix 1 (1xxx2): \n");
		break ;
	case 2:
		printf("matrix 2 (1xxx3): \n");
		break ;
	case 3:
		printf("matrix 3 (1xxx4): \n");
		break ;
	case 4:
		printf("matrix 4 (2xxx1): \n");
		break ;
	case 5:
		printf("matrix 5 (2xxx2): \n");
		break ;
	case 6:
		printf("matrix 6 (2xxx3): \n");
		break ;
	case 7:
		printf("matrix 7 (3xxx1): \n");
		break ;
	case 8:
		printf("matrix 8 (3xxx2): \n");
		break ;
	case 9:
		printf("matrix 9 (4xxx1): \n");
		break ;
	}
}

static void	print_meta_matrix(char ***meta)
{
	int	count;

	count = 1;
	while (*meta)
	{
		print_matrix_name(count++);
		print_matrix(*meta, 4);
		meta++;
	}
}

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
		free_matrix(matrix);
		return (error());
	}
	meta_matrix = init_meta_matrix();
	print_meta_matrix(meta_matrix);
	free_meta_matrix(meta_matrix);
	free_matrix(matrix);
}
