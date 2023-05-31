/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_borders.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:19:23 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/31 18:20:58 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static void	print_top(char **matrix, int width);
static void	print_middle(char **matrix);
static void	print_bottom(char **matrix, int width);

void	print_borders(char **matrix, int width)
{
	print_top(matrix, width);
	ft_putchar('\n');
	print_middle(matrix);
	print_bottom(matrix, width);
	ft_putchar('\n');
}

static void	print_middle(char **matrix)
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

static void	print_top(char **matrix, int width)
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

static void	print_bottom(char **matrix, int width)
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
