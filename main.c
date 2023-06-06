/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:24:40 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/03 20:06:47 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
// #include <fcntl.h>

// static void	print_meta_matrix(char ***meta);

int	main(int argc, char **argv)
{
	char	**borders_matrix;
	char	***meta_matrix;

	if (1 == argc)
		return (1);
	if (!input_is_valid(argv))
		return (error());
	borders_matrix = init_matrix(argv);
	if (!lines_are_valid(borders_matrix) || !cols_are_valid(borders_matrix))
	{
		free_matrix(borders_matrix);
		return (error());
	}
	meta_matrix = init_meta_matrix();
	rush01_algorithm(borders_matrix, meta_matrix);
	// print_meta_matrix(meta_matrix);
	free_meta_matrix(meta_matrix);
	free_matrix(borders_matrix);
}

// static void	print_matrix_name(int count, int fd);
//
// static void	print_meta_matrix(char ***meta)
// {
// 	int	count;
//
// 	count = 1;
// 	int fd = open("meta_matrix.txt", O_WRONLY | O_CREAT, 0666);
// 	while (*meta)
// 	{
// 		print_matrix_name(count++, fd);
// 		print_matrix_fd(*meta, 4, fd);
// 		dprintf(fd, "\n");
// 		meta++;
// 	}
// }
//
// static void	print_matrix_name(int count, int fd)
// {
// 	switch (count)
// 	{
// 	case 1:
// 		dprintf(fd, "matrix 1 (1xxx2): \n");
// 		break ;
// 	case 2:
// 		dprintf(fd, "matrix 2 (1xxx3): \n");
// 		break ;
// 	case 3:
// 		dprintf(fd, "matrix 3 (1xxx4): \n");
// 		break ;
// 	case 4:
// 		dprintf(fd, "matrix 4 (2xxx1): \n");
// 		break ;
// 	case 5:
// 		dprintf(fd, "matrix 5 (2xxx2): \n");
// 		break ;
// 	case 6:
// 		dprintf(fd, "matrix 6 (2xxx3): \n");
// 		break ;
// 	case 7:
// 		dprintf(fd, "matrix 7 (3xxx1): \n");
// 		break ;
// 	case 8:
// 		dprintf(fd, "matrix 8 (3xxx2): \n");
// 		break ;
// 	case 9:
// 		dprintf(fd, "matrix 9 (4xxx1): \n");
// 		break ;
// 	}
// }
