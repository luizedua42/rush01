/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:18:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/03 18:22:40 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static char	*get_1xxxx2_row_string(char ***meta, char *prefix, int prev);
static char	*get_1xxxx3_row_string(char ***meta, char *prefix, int prev);
static char	*get_1xxxx4_row_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx1_row_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx2_row_string(char ***meta, char *prefix, int prev);
static char	*get_2xxxx3_row_string(char ***meta, char *prefix, int prev);
static char	*get_3xxxx1_row_string(char ***meta, char *prefix, int prev);
static char	*get_3xxxx2_row_string(char ***meta, char *prefix, int prev);
static char	*get_4xxxx1_row_string(char ***meta, char *prefix, int prev);

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

static char	*get_1xxxx2_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_1xxxx3_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_1xxxx4_row_string(char ***meta, char *prefix, int prev)
{
	(void)prev;
	if (!prefix)
		return (meta[2][0]);
	if (1 == check_prefix(meta[2][0], prefix))
		return (meta[2][0]);
	return (NULL);
}

static char	*get_2xxxx1_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_2xxxx2_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_2xxxx3_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_3xxxx1_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_3xxxx2_row_string(char ***meta, char *prefix, int prev)
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

static char	*get_4xxxx1_row_string(char ***meta, char *prefix, int prev)
{
	(void)prev;
	if (!prefix)
		return (meta[8][0]);
	if (1 == check_prefix(meta[8][0], prefix))
		return (meta[8][0]);
	return (NULL);
}

// #include <assert.h>
// #include <stdio.h>
// #include <string.h>
// #include "utils.c"
// #include "free_matrix.c"
// #include "init_meta_matrix_01.c"
// #include "init_meta_matrix_02.c"
//
// int	main(void)
// {
// 	char	***meta;
// 	char	*prefix;
// 	int		prev;
// 	int		pair[2];
//
// 	meta = init_meta_matrix();
// 	prefix = NULL;
// 	prev = 0;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_row_string(pair, meta, prefix, prev), "4123"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_row_string(pair, meta, prefix, prev), "4132"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_row_string(pair, meta, prefix, prev), "4213"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(!strcmp(get_row_string(pair, meta, prefix, prev), "4312"));
// 	prefix = "4";
// 	prev = 1;
// 	pair[LEFT] = 1;
// 	pair[RIGHT] = 2;
// 	assert(NULL == get_row_string(pair, meta, prefix, prev));

	// assert(!strcmp(get_row_string(1, 3, meta, prefix, prev), "4132"));
	// // assert(!strcmp(get_row_string(1, 4, meta, prefix, prev), "4321"));
	// assert(!strcmp(get_row_string(2, 2, meta, prefix, prev), "1423"));
	// assert(!strcmp(get_row_string(2, 3, meta, prefix, prev), "1432"));
	// assert(!strcmp(get_row_string(3, 1, meta, prefix, prev), "2134"));
	// assert(!strcmp(get_row_string(3, 2, meta, prefix, prev), "1342"));
	// // assert(!strcmp(get_row_string(4, 1, meta, prefix, prev), "1234"));
	// prefix = "1";
	// assert(NULL == get_row_string(1, 2, meta, prefix, prev));
	// assert(NULL == get_row_string(1, 3, meta, prefix, prev));
	// // assert(NULL == get_row_string(1, 4, meta, prefix, prev));
	// assert(!strcmp(get_row_string(2, 2, meta, prefix, prev), "1423"));
	// assert(!strcmp(get_row_string(2, 3, meta, prefix, prev), "1432"));
	// assert(!strcmp(get_row_string(3, 1, meta, prefix, prev), "1324"));
	// assert(!strcmp(get_row_string(3, 2, meta, prefix, prev), "1342"));
	// // assert(!strcmp(get_row_string(4, 1, meta, prefix, prev), "1234"));
	// prefix = "14";
	// assert(get_row_string(1, 2, meta, prefix, prev) == NULL);
	// assert(get_row_string(1, 3, meta, prefix, prev) == NULL);
	// assert(!strcmp(get_row_string(2, 2, meta, prefix, prev), "1423"));
	// assert(!strcmp(get_row_string(2, 3, meta, prefix, prev), "1432"));
	// // assert(NULL == get_row_string(1, 4, meta, prefix, prev));
	// assert(NULL == get_row_string(3, 1, meta, prefix, prev));
	// assert(NULL == get_row_string(3, 2, meta, prefix, prev));
	// // assert(NULL == get_row_string(4, 1, meta, prefix, prev));
	// prefix = "43";
	// assert(!strcmp(get_row_string(1, 2, meta, prefix, prev), "4312"));
	// assert(!strcmp(get_row_string(1, 3, meta, prefix, prev), "4312"));
	// assert(NULL == (get_row_string(2, 2, meta, prefix, prev)));
	// assert(NULL == (get_row_string(2, 3, meta, prefix, prev)));
	// // assert(!strcmp(get_row_string(1, 4, meta, prefix, prev), "4321"));
	// assert(NULL == get_row_string(3, 1, meta, prefix, prev));
	// assert(NULL == get_row_string(3, 2, meta, prefix, prev));
	// assert(NULL == get_row_string(4, 1, meta, prefix, prev));
// 	free_meta_matrix(meta);
// 	printf("all tests passed!\n");
// }
