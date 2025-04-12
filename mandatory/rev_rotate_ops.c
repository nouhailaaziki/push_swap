/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:13:00 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:50:07 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_orion *orion, char *str)
{
	int		i;
	long	tmp;

	if (orion->a_len > 1)
	{
		tmp = orion->a[orion->a_len - 1];
		i = orion->a_len - 1;
		while (i > 0)
		{
			orion->a[i] = orion->a[i - 1];
			i--;
		}
		orion->a[0] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	rrb(t_orion *orion, char *str)
{
	int		i;
	long	tmp;

	if (orion->b_len > 1)
	{
		tmp = orion->b[orion->b_len - 1];
		i = orion->b_len - 1;
		while (i > 0)
		{
			orion->b[i] = orion->b[i - 1];
			i--;
		}
		orion->b[0] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	rrr(t_orion *orion, char *str)
{
	rra(orion, NULL);
	rrb(orion, NULL);
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}
