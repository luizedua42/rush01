/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/31 17:33:01 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		lines_are_valid(char **args);
void	print_borders(char **matrix, int width);
char	**init_matrix(char **argv);
void	free_matrix(char **matrix, int height);

int	main(int argc, char **argv)
{
	char	**matrix;

	if (1 == argc)
		return (1);
	matrix = init_matrix(argv);
	if (!lines_are_valid(matrix))
	{
		printf("error\n");
		free_matrix(matrix, 4);
		return (0);
	}
	// print_borders(matrix, 4);
}
