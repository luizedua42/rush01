/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_is_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:46:27 by luizedua          #+#    #+#             */
/*   Updated: 2023/06/01 11:09:26 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static int ft_strlen(char *str)
{
	char *end;

	end = str;
	while (end && *end)
		end++;
	return (end - str);
}

int input_is_valid(char **argv)
{
	int	i;

	i= 0;
	if (ft_strlen(argv[1]) != 31)
		return (0);
	while(argv[1][i])
	{
		if (argv[1][i] != '1' \
		&& argv[1][i] != '2' \
		&& argv[1][i] != '3' \
		&& argv[1][i] != '4' && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}