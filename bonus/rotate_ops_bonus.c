/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:13:03 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 16:40:50 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra(t_orion *orion, char *str)
{
	int		i;
	long	tmp;

	if (orion->a_len > 1)
	{
		tmp = orion->a[0];
		i = 0;
		while (i < orion->a_len - 1)
		{
			orion->a[i] = orion->a[i + 1];
			i++;
		}
		orion->a[orion->a_len - 1] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	rb(t_orion *orion, char *str)
{
	int		i;
	long	tmp;

	if (orion->b_len > 1)
	{
		tmp = orion->b[0];
		i = 0;
		while (i < orion->b_len - 1)
		{
			orion->b[i] = orion->b[i + 1];
			i++;
		}
		orion->b[orion->b_len - 1] = tmp;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	rr(t_orion *orion, char *str)
{
	ra(orion, NULL);
	rb(orion, NULL);
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}
