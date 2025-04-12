/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:48:16 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:47:10 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	track_max_pos(t_orion *orion)
{
	int	tmp;

	tmp = orion->a[0];
	orion->i = 0;
	orion->max = 0;
	while (orion->i < orion->len)
	{
		if (orion->a[orion->i] > tmp)
		{
			tmp = orion->a[orion->i];
			orion->max = orion->i;
		}
		orion->i++;
	}
}

void	sort_three(t_orion *orion)
{
	orion->i = 0;
	track_max_pos(orion);
	if (orion->max == orion->len - 1)
		sa(orion, "sa\n");
	if (orion->max == 0)
	{
		ra(orion, "ra\n");
		check_orderly(orion);
		sa(orion, "sa\n");
	}
	if (orion->max != 0 && orion->max != orion->len - 1)
	{
		rra(orion, "rra\n");
		check_orderly(orion);
		sa(orion, "sa\n");
	}
}

void	track_min(t_orion *orion)
{
	orion->i = 0;
	orion->min = orion->a[0];
	while (orion->i < orion->len)
	{
		if (orion->a[orion->i] < orion->min)
			orion->min = orion->a[orion->i];
		orion->i++;
	}
}

void	sort_four(t_orion *orion)
{
	int	i;

	i = 0;
	track_min(orion);
	while (orion->a[0] == orion->min)
	{
		if (orion->a[1] == orion->min)
			sa(orion, "sa\n");
		else
			rra(orion, "rra\n");
		i++;
	}
	pb(orion, "pb\n");
	sort_three(orion);
	pa(orion, "pa\n");
	check_orderly(orion);
}

void	sort_five(t_orion *orion)
{
	int	i;

	i = 0;
	track_min(orion);
	while (orion->a[0] == orion->min)
	{
		if (orion->a[1] == orion->min)
			sa(orion, "sa\n");
		else
			rra(orion, "rra\n");
		i++;
	}
	pb(orion, "pb\n");
	sort_four(orion);
	pa(orion, "pa\n");
	check_orderly(orion);
}
