/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/30 14:11:54 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_borders(char **matrix, int width);
char	**init_matrix(char **argv);
void	free_matrix(char **matrix, int height);

int	main(int argc, char **argv)
{
	char	**matrix;

	if (1 == argc)
		return (1);
	matrix = init_matrix(argv);
	print_borders(matrix, 4);
	free_matrix(matrix, 4);
}
