/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_putstuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:08:10 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/30 14:08:38 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putspace(void)
{
	write(1, "  ", 2);
}

void	putspaces(void)
{
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
	putspace();
}
