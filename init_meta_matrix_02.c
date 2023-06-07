/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrix_tests_02.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:31:31 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/01 16:31:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	**c_2xxxx2(void)
{
	char	**matrix;

	matrix = malloc(7 * sizeof(char *));
	matrix[0] = "1423";
	matrix[1] = "2143";
	matrix[2] = "2413";
	matrix[3] = "3142";
	matrix[4] = "3241";
	matrix[5] = "3412";
	matrix[6] = NULL;
	return (matrix);
}

char	**c_2xxxx3(void)
{
	char	**matrix;

	matrix = malloc(4 * sizeof(char *));
	matrix[0] = "1432";
	matrix[1] = "2431";
	matrix[2] = "3421";
	matrix[3] = NULL;
	return (matrix);
}

char	**c_3xxxx1(void)
{
	char	**matrix;

	matrix = malloc(4 * sizeof(char *));
	matrix[0] = "2134";
	matrix[1] = "2314";
	matrix[2] = "1324";
	matrix[3] = NULL;
	return (matrix);
}

char	**c_3xxxx2(void)
{
	char	**matrix;

	matrix = malloc(4 * sizeof(char *));
	matrix[0] = "1342";
	matrix[1] = "2341";
	matrix[2] = "1243";
	matrix[3] = NULL;
	return (matrix);
}

char	**c_4xxxx1(void)
{
	char	**matrix;

	matrix = malloc(2 * sizeof(char *));
	matrix[0] = "1234";
	matrix[1] = NULL;
	return (matrix);
}
