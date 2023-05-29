/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/29 17:38:40 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	free_matrix(char **matrix, int height);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putspace(void)
{
	write(1, "  ", 2);
}

void putspaces()
{
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
}

void	print_middle(char **matrix)
{
	ft_putchar(matrix[2][0]);
	putspaces();
	ft_putchar(matrix[3][0]);
	ft_putchar('\n');

	ft_putchar(matrix[2][1]);
	putspaces();
	ft_putchar(matrix[3][1]);
	ft_putchar('\n');

	ft_putchar(matrix[2][2]);
	putspaces();
	ft_putchar(matrix[3][2]);
	ft_putchar('\n');
	
	ft_putchar(matrix[2][3]);
	putspaces();
	ft_putchar(matrix[3][3]);
	ft_putchar('\n');
}

void	print_top(char **matrix, int width)
{
	int	j;

	j = 0;
	putspace();
	while (j < width)
	{
		ft_putchar(matrix[0][j]);
		if (j != width - 1)
			putspace();
		j++;
	}
}

void	print_bottom(char **matrix, int width)
{
	int	j;

	j = 0;
	putspace();
	while (j < width)
	{
		ft_putchar(matrix[1][j]);
		if (j != width - 1)
			putspace();
		j++;
	}
}

void	print_borders(char **matrix, int width)
{
	print_top(matrix, width);
	ft_putchar('\n');
	print_middle(matrix);
	print_bottom(matrix, width);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	char	**matrix;

	if (1 == argc)
		return (1);
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
	print_borders(matrix, 4);
	free_matrix(matrix, 4);
}

void	free_matrix(char **matrix, int height)
{
	int	i;

	i = -1;
	while (++i < height)
		free(matrix[i]);
	free(matrix);
}
