/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_algorithm.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:05:51 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/03 21:34:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include <string.h>

static int col_function(char **matrix, char ***meta, int *curr, int prev);

static void printcolfunct(char *function, char **matrix, char ***meta, int *curr, int prev, char *prefix,
                          char *string)
{
    printf("Function: %s\n", function);
    printf("Matrix:\n");
    print_matrix(matrix, 6);
    printf("curr: %d, %d\n", curr[Y], curr[X]);
    printf("fill collumn: %s\n", string);
    printf("prev: %d\n", prev);
    printf("current col prefix: %s\n", prefix);
    printf("Function %s END\n\n\n", function);
}

static void printlinefunct(char *function, char **matrix, char ***meta, int *curr, int prev, char *prefix,
                          char *string)
{
    printf("Function: %s\n", function);
    printf("Matrix:\n");
    print_matrix(matrix, 6);
    printf("curr: %d, %d\n", curr[Y], curr[X]);
    printf("fill line: %s\n", string);
    printf("prev: %d\n", prev);
    printf("current line prefix: %s\n", prefix);
    printf("Function %s END\n\n\n", function);
}

static void fill_curr_point(char **matrix, int *current_point, char c)
{
    matrix[current_point[Y]][current_point[X]] = c;
}

static int set_current_point(char **matrix, int *current_point)
{
    int i;
    int j;

    i = -1;
    j = -1;
    while (++i < 6)
    {
        j = -1;
        while (++j < 6)
        {
            if ('x' == matrix[i][j])
            {
                (current_point)[Y] = i;
                (current_point)[X] = j;
                return (1);
            }
        }
    }
    return (0);
}

static void set_line_prefix(char **matrix, int *current_point, char *prefix)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 1;
    k = 0;
    while (i != current_point[Y])
        i++;
    if ('x' == matrix[i][1])
    {
        prefix = "xxxx";
        return;
    }
    while (j < 5)
    {
        prefix[k] = matrix[i][j];
        k++;
        j++;
    }
}

static void set_col_prefix(char **matrix, int *current_point, char *prefix)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = -1;
    while (j != current_point[X])
        j++;
    if ('x' == matrix[1][j])
    {
        prefix = "xxxx";
        return;
    }
    while (i < 5)
        prefix[++k] = matrix[++i][j];
    prefix[k] = '\0';
}

static void set_line_pair(int *pair, char **matrix, int *current_point)
{
    int i;

    i = 0;
    while (i != current_point[Y])
        i++;
    pair[LEFT] = matrix[i][0] - '0';
    pair[RIGHT] = matrix[i][5] - '0';
}

static void set_col_pair(int *pair, char **matrix, int *current_point)
{
    int j;

    j = 0;
    while (j != current_point[X])
        j++;
    pair[UP] = matrix[0][j] - '0';
    pair[DOWN] = matrix[5][j] - '0';
}

static void fill_collumn(char **matrix, int *curr, char *string)
{
    int i;

    i = 0;
    while (string[i])
    {
        matrix[i + 1][curr[X]] = string[i];
        i++;
    }
}

static void fill_line(char **matrix, int *curr, char *string)
{
    int j;

    j = 0;
    while (string[j])
    {
        matrix[curr[Y]][j + 1] = string[j];
        j++;
    }
}

static void del_last_line(char **matrix, int *curr)
{
	int i;
	int j;

	i = 0;
	j = curr[X];
	if (curr[Y] == 1)
		return ;
	while (i != curr[Y] - 1)
		i++;
	while (j != 5)
		matrix[i][j++] = 'x';
}

static void del_last_col(char **matrix, int *curr)
{
	int i;
	int j;

	i = curr[Y];
	j = 0;
	if (curr[X] == 1)
		return ;
	while (j != curr[X] - 1)
		j++;
	while (i != 5)
		matrix[i++][j] = 'x';
}

static int line_function(char **matrix, char ***meta, int *curr, int prev)
{
    int line_pair[2];
    char line_prefix[] = "xxxx";
    char *string;

	static int debug;
	if (debug++ == 44)
		exit(1);
    if (!set_current_point(matrix, curr))
        return (-1);
    set_line_prefix(matrix, curr, line_prefix);
    set_line_pair(line_pair, matrix, curr);
    string = get_row_string(line_pair, meta, line_prefix, prev);
    if (string)
    {
        fill_line(matrix, curr, string);
        printlinefunct("line_function", matrix, meta, curr, prev, line_prefix, string);
        col_function(matrix, meta, curr, 0);
    }
    else if (!string)
    {
        del_last_col(matrix, curr);
        set_line_prefix(matrix, curr, line_prefix);
        printlinefunct("line_function", matrix, meta, curr, prev, line_prefix, string);
        col_function(matrix, meta, curr, 1);
    }
    return (0);
}

static int col_function(char **matrix, char ***meta, int *curr, int prev)
{
    char *string;
    int col_pair[2];
    char col_prefix[5] = "xxxx";

    if (!set_current_point(matrix, curr))
        return (-1);
    set_col_prefix(matrix, curr, col_prefix);
    set_col_pair(col_pair, matrix, curr);
    string = get_col_string(col_pair, meta, col_prefix, prev);
    if (string)
    {
        fill_collumn(matrix, curr, string);
        printcolfunct("col_function", matrix, meta, curr, prev, col_prefix, string);
        if (-1 == line_function(matrix, meta, curr, 0))
            return (-1);
    }
    else if (!string)
    {
        del_last_line(matrix, curr);
        printcolfunct("col_function", matrix, meta, curr, prev, col_prefix, string);
        if (-1 == line_function(matrix, meta, curr, 1))
            return (-1);
    }
    return (0);
}

void rush01_algorithm(char **matrix, char ***meta)
{
    int current_point[2];

    current_point[0] = 0;
    current_point[1] = 0;
    line_function(matrix, meta, current_point, 0);
}
