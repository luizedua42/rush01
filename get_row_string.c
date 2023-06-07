/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:18:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 11:30:54 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*get_row_string(int pair[2], char ***meta, char *prefix, int prev)
{
	if (pair[LEFT] == 1 && pair[RIGHT] == 2)
		return (get_1xxxx2_row_string(meta, prefix, prev));
	if (pair[LEFT] == 1 && pair[RIGHT] == 3)
		return (get_1xxxx3_row_string(meta, prefix, prev));
	if (pair[LEFT] == 1 && pair[RIGHT] == 4)
		return (get_1xxxx4_row_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 1)
		return (get_2xxxx1_row_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 2)
		return (get_2xxxx2_row_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 3)
		return (get_2xxxx3_row_string(meta, prefix, prev));
	if (pair[LEFT] == 3 && pair[RIGHT] == 1)
		return (get_3xxxx1_row_string(meta, prefix, prev));
	if (pair[LEFT] == 3 && pair[RIGHT] == 2)
		return (get_3xxxx2_row_string(meta, prefix, prev));
	if (pair[LEFT] == 4 && pair[RIGHT] == 1)
		return (get_4xxxx1_row_string(meta, prefix, prev));
	return (NULL);
}
