/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines_are_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:01:35 by luizedua          #+#    #+#             */
/*   Updated: 2023/05/31 18:13:22 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lines_are_valid(char **args)
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (args[x][0] == '4' && args[x][5] >= '2')
			return (0);
		if ((args[x][0] == '3' || args[x][0] == '2') && args[x][5] == '4')
			return (0);
		if (args[x][0] == '1' && args[x][5] == '1')
			return (0);
		if (args[x][0] == '3' && args[x][5] == '3')
			return (0);
		x++;
	}
	return (1);
}
