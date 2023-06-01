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

static int	ft_strlen(char *str);
static int	char_is_valid(char *c);

int	input_is_valid(char **argv)
{
	int	i;

	i = 0;
	if (ft_strlen(argv[1]) != 31)
		return (0);
	while (argv[1][i])
	{
		if (!char_is_valid(&argv[1][i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_strlen(char *str)
{
	char	*end;

	end = str;
	while (end && *end)
		end++;
	return (end - str);
}

static int	char_is_valid(char *c)
{
	if (*c != '1' && *c != '2' && *c != '3' && *c != '4' && *c != ' ')
		return (0);
	else if (*c == ' ' && *(c + 1) == ' ')
		return (0);
	return (1);
}
