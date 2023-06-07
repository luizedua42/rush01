/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_col_string_utils01.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:34:11 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/07 11:36:07 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

char	*get_1xxxx2_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[0][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[0][++string_index])
	{
		if (1 == check_prefix(meta[0][string_index], prefix))
		{
			if (!prev)
				return (meta[0][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[0][string_index]);
		}
	}
	return (NULL);
}

char	*get_1xxxx3_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[1][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[1][++string_index])
	{
		if (1 == check_prefix(meta[1][string_index], prefix))
		{
			if (!prev)
				return (meta[1][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[1][string_index]);
		}
	}
	return (NULL);
}

char	*get_1xxxx4_col_string(char ***meta, char *prefix, int prev)
{
	if (!prev)
	{
		if (!prefix)
			return (meta[2][0]);
		if (1 == check_prefix(meta[2][0], prefix))
			return (meta[2][0]);
	}
	return (NULL);
}

char	*get_2xxxx1_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[3][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[3][++string_index])
	{
		if (1 == check_prefix(meta[3][string_index], prefix))
		{
			if (!prev)
				return (meta[3][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[3][string_index]);
		}
	}
	return (NULL);
}

char	*get_2xxxx2_col_string(char ***meta, char *prefix, int prev)
{
	int			string_index;
	int			strings_matched;
	static int	call_counter;

	if (!prev)
		call_counter = 0;
	call_counter++;
	if (!prefix)
		return (meta[4][0]);
	string_index = -1;
	strings_matched = 0;
	while (meta[4][++string_index])
	{
		if (1 == check_prefix(meta[4][string_index], prefix))
		{
			if (!prev)
				return (meta[4][string_index]);
			else if (prev && ++strings_matched != call_counter)
				continue ;
			else if (prev && strings_matched == call_counter)
				return (meta[4][string_index]);
		}
	}
	return (NULL);
}
