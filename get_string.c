/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:18:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/01 17:19:46 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static char	*get_1xxxx2_string(char ***meta, char *prefix);
static char	*get_1xxxx3_string(char ***meta, char *prefix);
static char	*get_1xxxx4_string(char ***meta, char *prefix);
static char	*get_2xxxx2_string(char ***meta, char *prefix);
static char	*get_2xxxx3_string(char ***meta, char *prefix);
static char	*get_3xxxx1_string(char ***meta, char *prefix);
static char	*get_3xxxx2_string(char ***meta, char *prefix);
static char	*get_4xxxx1_string(char ***meta, char *prefix);

char	*get_string(int left_up, int right_down, char ***meta, char *prefix)
{
	if (left_up == 1 && right_down == 2)
		return (get_1xxxx2_string(meta, prefix));
	if (left_up == 1 && right_down == 3)
		return (get_1xxxx3_string(meta, prefix));
	if (left_up == 1 && right_down == 4)
		return (get_1xxxx4_string(meta, prefix));
	if (left_up == 2 && right_down == 2)
		return (get_2xxxx2_string(meta, prefix));
	if (left_up == 2 && right_down == 3)
		return (get_2xxxx3_string(meta, prefix));
	if (left_up == 3 && right_down == 1)
		return (get_3xxxx1_string(meta, prefix));
	if (left_up == 3 && right_down == 2)
		return (get_3xxxx2_string(meta, prefix));
	if (left_up == 4 && right_down == 1)
		return (get_4xxxx1_string(meta, prefix));
	return (NULL);
}

static char	*get_1xxxx2_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[0][0]);
	while (string_index <= 3)
	{
		if (1 == check_prefix(meta[0][string_index], prefix))
			return (meta[0][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_1xxxx3_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[1][0]);
	while (string_index <= 2)
	{
		if (1 == check_prefix(meta[1][string_index], prefix))
			return (meta[1][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_1xxxx4_string(char ***meta, char *prefix)
{
	(void)prefix;
	return (meta[2][0]);
}

static char	*get_2xxxx2_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[3][0]);
	while (string_index <= 3)
	{
		if (1 == check_prefix(meta[3][string_index], prefix))
			return (meta[3][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_2xxxx3_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[4][0]);
	while (string_index <= 2)
	{
		if (1 == check_prefix(meta[4][string_index], prefix))
			return (meta[4][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_3xxxx1_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[5][0]);
	while (string_index <= 2)
	{
		if (1 == check_prefix(meta[5][string_index], prefix))
			return (meta[5][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_3xxxx2_string(char ***meta, char *prefix)
{
	int	string_index;

	string_index = 0;
	if (!prefix)
		return (meta[6][0]);
	while (string_index <= 2)
	{
		if (1 == check_prefix(meta[6][string_index], prefix))
			return (meta[6][string_index]);
		string_index++;
	}
	return (NULL);
}

static char	*get_4xxxx1_string(char ***meta, char *prefix)
{
	(void)prefix;
	return (meta[7][0]);
}
