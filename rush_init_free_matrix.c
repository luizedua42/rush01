/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_init_free_matrix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:11:22 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/30 14:11:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	**init_matrix(char **argv)
{
	char	**matrix;

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

void	free_matrix(char **matrix, int height)
{
	int	i;

	i = -1;
	while (++i < height)
		free(matrix[i]);
	free(matrix);
}
