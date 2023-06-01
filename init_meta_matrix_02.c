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

char	**c_2xxxx3(void)
{
	char	**matrix;

	matrix = malloc(3 * sizeof(char *));
	matrix[0] = malloc(5 * sizeof(char *));
	matrix[1] = malloc(5 * sizeof(char *));
	matrix[2] = malloc(5 * sizeof(char *));
	matrix[0] = "1432";
	matrix[1] = "2431";
	matrix[2] = "3421";
	return (matrix);
}

char	**c_3xxxx1(void)
{
	char	**matrix;

	matrix = malloc(3 * sizeof(char *));
	matrix[0] = malloc(5 * sizeof(char *));
	matrix[1] = malloc(5 * sizeof(char *));
	matrix[2] = malloc(5 * sizeof(char *));
	matrix[0] = "2134";
	matrix[1] = "2314";
	matrix[2] = "1324";
	return (matrix);
}

char	**c_3xxxx2(void)
{
	char	**matrix;

	matrix = malloc(3 * sizeof(char *));
	matrix[0] = malloc(5 * sizeof(char *));
	matrix[1] = malloc(5 * sizeof(char *));
	matrix[2] = malloc(5 * sizeof(char *));
	matrix[0] = "1342";
	matrix[1] = "2341";
	matrix[2] = "1243";
	return (matrix);
}

char	**c_4xxxx1(void)
{
	char	**matrix;

	matrix = malloc(1 * sizeof(char *));
	matrix[0] = malloc(5 * sizeof(char));
	matrix[0] = "1234";
	return (matrix);
}
