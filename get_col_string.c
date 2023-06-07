/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_col_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:56:37 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/03 19:58:23 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*get_col_string(int pair[2], char ***meta, char *prefix, int prev)
{
	if (pair[LEFT] == 1 && pair[RIGHT] == 2)
		return (get_1xxxx2_col_string(meta, prefix, prev));
	if (pair[LEFT] == 1 && pair[RIGHT] == 3)
		return (get_1xxxx3_col_string(meta, prefix, prev));
	if (pair[LEFT] == 1 && pair[RIGHT] == 4)
		return (get_1xxxx4_col_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 1)
		return (get_2xxxx1_col_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 2)
		return (get_2xxxx2_col_string(meta, prefix, prev));
	if (pair[LEFT] == 2 && pair[RIGHT] == 3)
		return (get_2xxxx3_col_string(meta, prefix, prev));
	if (pair[LEFT] == 3 && pair[RIGHT] == 1)
		return (get_3xxxx1_col_string(meta, prefix, prev));
	if (pair[LEFT] == 3 && pair[RIGHT] == 2)
		return (get_3xxxx2_col_string(meta, prefix, prev));
	if (pair[LEFT] == 4 && pair[RIGHT] == 1)
		return (get_4xxxx1_col_string(meta, prefix, prev));
	return (NULL);
}
