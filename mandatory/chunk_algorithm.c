/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 00:50:03 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 15:30:34 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(long *arr, int len)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	down(t_orion *orion)
{
	int	down;

	down = 0;
	orion->j = 0;
	while (orion->j < orion->a_len)
	{
		if (orion->a[orion->j] > orion->a[orion->j +1])
			down++;
		orion->j++;
	}
	if (down >= (orion->len - 1) * 0.7)
		return (1);
	return (0);
}

void	sort(t_orion *orion, int index, long *sorted, int chunk_size)
{
	int	i;

	i = 0;
	while (orion->a_len > 0)
	{
		index = get_index_in_sorted(sorted, orion->len, orion->a[0]);
		if (index <= i)
		{
			pb(orion, "pb\n");
			i++;
		}
		else if (index <= i + chunk_size)
		{
			pb(orion, "pb\n");
			rb(orion, "rb\n");
			i++;
		}
		else
			ra(orion, "ra\n");
	}
}

void	push_by_chunks(t_orion *orion, long *sorted, int chunk_size, int i)
{
	int	index;

	index = 0;
	if (down(orion))
	{
		while (orion->a_len > 0)
		{
			index = get_index_in_sorted(sorted, orion->len, orion->a[0]);
			if (index <= i)
			{
				pb(orion, "pb\n");
				i++;
			}
			else if (index <= i + chunk_size)
			{
				(pb(orion, "pb\n"), rb(orion, "rb\n"));
				i++;
			}
			else
				rra(orion, "rra\n");
		}
	}
	else
		sort(orion, index, sorted, chunk_size);
}

void	push_back(t_orion *orion, int *i, int *max_i)
{
	*i = 1;
	*max_i = 0;
	while (*i < orion->b_len)
	{
		if (orion->b[*i] > orion->b[*max_i])
			*max_i = *i;
		(*i)++;
	}
	if (*max_i <= orion->b_len / 2)
	{
		while (*max_i > 0)
		{
			rb(orion, "rb\n");
			(*max_i)--;
		}
	}
	else
	{
		while (*max_i < orion->b_len)
		{
			rrb(orion, "rrb\n");
			(*max_i)++;
		}
	}
	pa(orion, "pa\n");
}
