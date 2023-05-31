/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:29:02 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/31 18:32:19 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

static void	ft_putstr(char *str);

int	error(void)
{
	ft_putstr("Error\n");
	return (1);
}

static void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
	return ;
}
