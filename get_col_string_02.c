/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_col_string_utils02.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:35:05 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 11:36:01 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*get_2xxxx3_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[5][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[5][++string_index])
	{
		if (1 == check_prefix(meta[5][string_index], prefix))
		{
			if (!prev)
				return (meta[5][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[5][string_index]);
		}
	}
	return (NULL);
}

char	*get_3xxxx1_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[6][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[6][++string_index])
	{
		if (1 == check_prefix(meta[6][string_index], prefix))
		{
			if (!prev)
				return (meta[6][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[6][string_index]);
		}
	}
	return (NULL);
}

char	*get_3xxxx2_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[7][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[7][++string_index])
	{
		if (1 == check_prefix(meta[7][string_index], prefix))
		{
			if (!prev)
				return (meta[7][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[7][string_index]);
		}
	}
	return (NULL);
}

char	*get_4xxxx1_col_string(char ***meta, char *prefix, int prev)
{
	if (!prev)
	{
		if (!prefix)
			return (meta[8][0]);
		if (1 == check_prefix(meta[8][0], prefix))
			return (meta[8][0]);
	}
	return (NULL);
}
