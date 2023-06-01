/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:35:37 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/01 16:07:32 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void algo_test(char **input_matrix)
{
	
}

char	**c_1xxxx2(void)
{
	char	**matrix;
	

	matrix = malloc (4 * sizeof(char *));
	matrix[0] = malloc (5 * sizeof(char));
	matrix[1] = malloc (5 * sizeof(char));
	matrix[2] = malloc (5 * sizeof(char));
	matrix[3] = malloc (5 * sizeof(char));
	matrix[0] = "4123";
	matrix[1] = "4132";
	matrix[2] = "4213";
	matrix[3] = "4312";
	return (matrix);
}


char	**c_1xxxx3(void)
{
	char	**matrix;

	matrix = malloc (3 * sizeof(char *));
	matrix[0] = malloc (5 * sizeof(char));
	matrix[1] = malloc (5 * sizeof(char));
	matrix[2] = malloc (5 * sizeof(char));
	matrix[0] = "4132";
	matrix[1] = "4231";
	matrix[2] = "4312";
	return (matrix);
}

char	**c_1xxxx4(void)
{
	char	**matrix;

	matrix = malloc (1 * sizeof(char *));
	matrix[0] = malloc (5 * sizeof(char));
	matrix[0] = "4321";
	return (matrix);
}

char	**c_4xxxx1(void)
{
	char	**matrix;

	matrix = malloc (1 * sizeof(char *));
	matrix[0] = malloc (5 * sizeof(char));
	matrix[0] = "1234";
	return (matrix);
}

