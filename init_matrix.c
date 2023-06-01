/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:25:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/01 11:01:09 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static void	x_filling(char **argv);
static char	**create_matrix(void);

char	**init_matrix(char **argv)
{
	char	**matrix;

	matrix = create_matrix();
	matrix[0][1] = argv[1][0];
	matrix[0][2] = argv[1][2];
	matrix[0][3] = argv[1][4];
	matrix[0][4] = argv[1][6];
	matrix[5][1] = argv[1][8];
	matrix[5][2] = argv[1][10];
	matrix[5][3] = argv[1][12];
	matrix[5][4] = argv[1][14];
	matrix[1][0] = argv[1][16];
	matrix[2][0] = argv[1][18];
	matrix[3][0] = argv[1][20];
	matrix[4][0] = argv[1][22];
	matrix[1][5] = argv[1][24];
	matrix[2][5] = argv[1][26];
	matrix[3][5] = argv[1][28];
	matrix[4][5] = argv[1][30];
	x_filling(matrix);
	return (matrix);
}

static char	**create_matrix(void)
{
	char	**matrix;

	matrix = malloc(6 * sizeof(char *));
	matrix[0] = malloc(6 * sizeof(char));
	matrix[1] = malloc(6 * sizeof(char));
	matrix[2] = malloc(6 * sizeof(char));
	matrix[3] = malloc(6 * sizeof(char));
	matrix[4] = malloc(6 * sizeof(char));
	matrix[5] = malloc(6 * sizeof(char));
	return (matrix);
}

static void	x_filling(char **matrix)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			matrix[i][j] = 'x';
			j++;
		}
		i++;
	}
	matrix[0][0] = ' ';
	matrix[0][5] = ' ';
	matrix[5][0] = ' ';
	matrix[5][5] = ' ';
}
