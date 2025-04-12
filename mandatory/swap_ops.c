/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:11:29 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:50:45 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_orion *orion, char *str)
{
	long	tmp;

	if (orion->a_len > 1)
	{
		tmp = orion->a[0];
		orion->a[0] = orion->a[1];
		orion->a[1] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	sb(t_orion *orion, char *str)
{
	long	tmp;

	if (orion->b_len > 1)
	{
		tmp = orion->b[0];
		orion->b[0] = orion->b[1];
		orion->b[1] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	ss(t_orion *orion, char *str)
{
	sa(orion, NULL);
	sb(orion, NULL);
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}
