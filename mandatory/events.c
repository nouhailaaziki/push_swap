/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:33:53 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 15:24:01 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(t_orion *orion)
{
	if (orion)
	{
		orion->i = 0;
		orion->j = 0;
		if (orion->matrix)
		{
			while (orion->matrix[orion->i])
				free(orion->matrix[orion->i++]);
		}
		free (orion->matrix);
		if (orion->a)
			free(orion->a);
		if (orion->b)
			free(orion->b);
		if (orion->sorted)
			free(orion->sorted);
	}
	exit(0);
}

void	error(t_orion *orion)
{
	if (orion)
	{
		orion->i = 0;
		orion->j = 0;
		if (orion->matrix)
		{
			while (orion->matrix[orion->i])
				free(orion->matrix[orion->i++]);
		}
		free (orion->matrix);
		if (orion->a)
			free(orion->a);
		if (orion->b)
			free(orion->b);
		if (orion->sorted)
			free(orion->sorted);
	}
	write(1, "Error\n", 7);
	exit (1);
}

int	check_orderly(t_orion *orion)
{
	orion->i = 0;
	orion->j = 0;
	while (orion->i < orion->len - 1
		&& orion->a[orion->i] < orion->a[orion->i + 1])
		orion->i++;
	if (orion->i == orion->len - 1)
		return (0);
	return (1);
}

void	sort_big(t_orion *orion)
{
	int		i;
	int		max_i;
	int		chunk_size;

	if (orion->len > 100)
		chunk_size = 38;
	else
		chunk_size = 12;
	orion->sorted = malloc(sizeof(long) * orion->len);
	if (!orion->sorted)
		error(orion);
	i = 0;
	while (i < orion->len)
	{
		orion->sorted[i] = orion->a[i];
		i++;
	}
	sort_array(orion->sorted, orion->len);
	push_by_chunks(orion, orion->sorted, chunk_size, 0);
	while (orion->b_len > 0)
		push_back(orion, &i, &max_i);
}

void	applay_ops(t_orion *orion)
{
	orion->a_len = orion->len;
	orion->b_len = 0;
	if (check_orderly(orion))
	{
		if (orion->len <= 3)
			sort_three(orion);
		else if (orion->len == 4)
			sort_four(orion);
		else if (orion->len == 5)
			sort_five(orion);
		else
			sort_big(orion);
	}
	exit_program(orion);
}
