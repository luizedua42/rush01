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

static char	*get_1xxxx2_col_string(char ***meta, char *prefix, int prev);
static char	*get_1xxxx3_col_string(char ***meta, char *prefix, int prev);
static char	*get_1xxxx4_col_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx1_col_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx2_col_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx3_col_string(char ***meta, char *prefix, int prev);
static char	*get_3xxxx1_col_string(char ***meta, char *prefix, int prev);
static char	*get_3xxxx2_col_string(char ***meta, char *prefix, int prev);
static char	*get_4xxxx1_col_string(char ***meta, char *prefix, int prev);

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

static char	*get_1xxxx2_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_1xxxx3_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_1xxxx4_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_2xxxx1_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_2xxxx2_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_2xxxx3_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_3xxxx1_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_3xxxx2_col_string(char ***meta, char *prefix, int prev)
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

static char	*get_4xxxx1_col_string(char ***meta, char *prefix, int prev)
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

// #include "free_matrix.c"
// #include "init_meta_matrix_01.c"
// #include "init_meta_matrix_02.c"
// #include "utils.c"
// #include <assert.h>
// #include <stdio.h>
// #include <string.h>
//
// int	main(void)
// {
// 	char	***meta;
// 	char	*prefix;
// 	int		prev;
// 	int		pair[2];
//
// 	meta = init_meta_matrix();
// 	// PAIR 1, 2:
// 	prefix = NULL;
// 	prev = 0;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4123"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4132"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4213"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4312"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(NULL == get_col_string(pair, meta, prefix, prev));
// 	// PAIR 1, 3:
// 	prefix = "42";
// 	prev = 0;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 3;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4231"));
// 	prefix = "42";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 3;
// 	assert(NULL == get_col_string(pair, meta, prefix, prev));
// 	// PAIR 2, 2:
// 	prefix = "2";
// 	prev = 0;
// 	pair[LEFT] = 2;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "2143"));
// 	prefix = "2";
// 	prev = 1;
// 	pair[LEFT] = 2;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "2413"));
// 	prefix = "2";
// 	prev = 1;
// 	pair[LEFT] = 2;
// 	pair[RIGHT] = 2;
// 	assert(NULL == (get_col_string(pair, meta, prefix, prev)));
// 	prefix = "2";
// 	prev = 0;
// 	pair[LEFT] = 2;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "2143"));
// 	prefix = "2";
// 	prev = 1;
// 	pair[LEFT] = 2;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "2413"));
// 	// PAIR 1, 4:
// 	prefix = "432";
// 	prev = 0;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 4;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4321"));
// 	prefix = "432";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 4;
// 	assert(NULL == (get_col_string(pair, meta, prefix, prev)));
// 	prefix = NULL;
// 	prev = 0;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 4;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "4321"));
// 	prefix = NULL;
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 4;
// 	assert(NULL == get_col_string(pair, meta, prefix, prev));
// 	// PAIR 4, 1:
// 	prefix = "123";
// 	prev = 0;
// 	pair[LEFT] = 4;
// 	pair[RIGHT] = 1;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "1234"));
// 	prefix = "123";
// 	prev = 1;
// 	pair[LEFT] = 4;
// 	pair[RIGHT] = 1;
// 	assert(NULL == (get_col_string(pair, meta, prefix, prev)));
// 	prefix = NULL;
// 	prev = 0;
// 	pair[LEFT] = 4;
// 	pair[RIGHT] = 1;
// 	assert(!strcmp(get_col_string(pair, meta, prefix, prev), "1234"));
// 	prefix = NULL;
// 	prev = 1;
// 	pair[LEFT] = 4;
// 	pair[RIGHT] = 1;
// 	assert(NULL == get_col_string(pair, meta, prefix, prev));
// 	free_meta_matrix(meta);
// 	printf("all tests passed!\n");
// }
