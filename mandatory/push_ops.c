/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:13:15 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:49:32 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_orion *orion, char *str)
{
	int	i;

	if (orion->b_len > 0)
	{
		i = orion->a_len;
		while (i > 0)
		{
			orion->a[i] = orion->a[i - 1];
			i--;
		}
		orion->a[0] = orion->b[0];
		i = 0;
		while (i < orion->b_len - 1)
		{
			orion->b[i] = orion->b[i + 1];
			i++;
		}
		orion->b[i] = 0;
		orion->a_len++;
		orion->b_len--;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}

void	pb(t_orion *orion, char *str)
{
	int	i;

	if (orion->a_len > 0)
	{
		i = orion->b_len;
		while (i > 0)
		{
			orion->b[i] = orion->b[i - 1];
			i--;
		}
		orion->b[0] = orion->a[0];
		i = 0;
		while (i < orion->a_len - 1)
		{
			orion->a[i] = orion->a[i + 1];
			i++;
		}
		orion->a[i] = 0;
		orion->b_len++;
		orion->a_len--;
	}
	if (str)
		write(1, str, ft_strlen(str));
	check_orderly(orion);
}
