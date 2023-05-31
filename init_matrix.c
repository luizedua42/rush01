/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:25:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/31 18:33:30 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (end && *end)
		end++;
	return (end - str);
}

char	**init_matrix(char **argv)
{
	char	**matrix;
	char	**error;

	error = NULL;
	if (ft_strlen(argv[1]) != 31)
		return (error);
	matrix = malloc(4 * sizeof(char *));
	matrix[0] = malloc(4 * sizeof(char));
	matrix[1] = malloc(4 * sizeof(char));
	matrix[2] = malloc(4 * sizeof(char));
	matrix[3] = malloc(4 * sizeof(char));
	matrix[0][0] = argv[1][0];
	matrix[0][1] = argv[1][2];
	matrix[0][2] = argv[1][4];
	matrix[0][3] = argv[1][6];
	matrix[1][0] = argv[1][8];
	matrix[1][1] = argv[1][10];
	matrix[1][2] = argv[1][12];
	matrix[1][3] = argv[1][14];
	matrix[2][0] = argv[1][16];
	matrix[2][1] = argv[1][18];
	matrix[2][2] = argv[1][20];
	matrix[2][3] = argv[1][22];
	matrix[3][0] = argv[1][24];
	matrix[3][1] = argv[1][26];
	matrix[3][2] = argv[1][28];
	matrix[3][3] = argv[1][30];
	return (matrix);
}
