/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/29 15:58:36 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matrix(char **matrix)
{
	int	sizex;
	int	sizey;
	int	i;
	int	j;
	
	sizey = 4;
	sizex = 4;
	i = 0;
	while (i < sizey)
	{	
		j = 0;
		while (j < sizex)
		{
			ft_putchar(matrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main(void)
{
	char	**matrix;
	
	matrix = malloc(4 * sizeof(char *));
	matrix[0] = malloc(4 * sizeof(char));
	matrix[1] = malloc(4 * sizeof(char));
	matrix[2] = malloc(4 * sizeof(char));
	matrix[3] = malloc(4 * sizeof(char));
	matrix[4] = malloc(4 * sizeof(char));
	matrix[0][0] = 'x';
	matrix[0][1] = 'x';
	matrix[0][2] = 'x';
	matrix[0][3] = 'x';
	matrix[1][0] = 'x';
	matrix[1][1] = 'x';
	matrix[1][2] = 'x';
	matrix[1][3] = 'x';
	matrix[2][0] = 'x';
	matrix[2][1] = 'x';
	matrix[2][2] = 'x';
	matrix[2][3] = 'x';
	matrix[3][0] = 'x';
	matrix[3][1] = 'x';
	matrix[3][2] = 'x';
	matrix[3][3] = 'x';
	matrix[4][0] = 'x';
	matrix[4][1] = 'x';
	matrix[4][2] = 'x';
	matrix[4][3] = 'x';

	print_matrix(matrix);
}