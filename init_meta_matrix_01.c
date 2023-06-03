/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrix_tests_01.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:35:37 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/01 16:49:28 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	***init_meta_matrix(void)
{
	char	***meta_matrix;

	meta_matrix = malloc(10 * sizeof(char **));
	meta_matrix[0] = c_1xxxx2();
	meta_matrix[1] = c_1xxxx3();
	meta_matrix[2] = c_1xxxx4();
	meta_matrix[3] = c_2xxxx1();
	meta_matrix[4] = c_2xxxx2();
	meta_matrix[5] = c_2xxxx3();
	meta_matrix[6] = c_3xxxx1();
	meta_matrix[7] = c_3xxxx2();
	meta_matrix[8] = c_4xxxx1();
	meta_matrix[9] = NULL;
	return (meta_matrix);
}

char	**c_1xxxx2(void)
{
	char	**matrix;

	matrix = malloc(5 * sizeof(char *));
	matrix[0] = "4123";
	matrix[1] = "4132";
	matrix[2] = "4213";
	matrix[3] = "4312";
	matrix[4] = NULL;
	return (matrix);
}

char	**c_1xxxx3(void)
{
	char	**matrix;

	matrix = malloc(4 * sizeof(char *));
	matrix[0] = "4132";
	matrix[1] = "4231";
	matrix[2] = "4312";
	matrix[3] = NULL;
	return (matrix);
}

char	**c_1xxxx4(void)
{
	char	**matrix;

	matrix = malloc(2 * sizeof(char *));
	matrix[0] = "4321";
	matrix[1] = NULL;
	return (matrix);
}

char	**c_2xxxx1(void)
{
	char	**matrix;

	matrix = malloc(3 * sizeof(char *));
	matrix[0] = "3124";
	matrix[1] = "3214";
	matrix[2] = NULL;
	return (matrix);
}
