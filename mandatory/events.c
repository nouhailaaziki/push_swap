/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:33:53 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:45:35 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(t_orion *orion)
{
	if (orion->a)
		free(orion->a);
	if (orion->b)
		free(orion->b);
	exit(0);
}

void	error(t_orion *orion)
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
	write(1, "Error\n", 7);
	exit (1);
}

void	check_orderly(t_orion *orion)
{
	orion->i = 0;
	orion->j = 0;
	while (orion->i < orion->len - 1
		&& orion->a[orion->i] < orion->a[orion->i + 1])
		orion->i++;
	if (orion->i == orion->len - 1)
		exit_program(orion);
}

void	applay_ops(t_orion *orion)
{
	orion->a_len = orion->len;
	orion->b_len = 0;
	check_orderly(orion);
	if (orion->len == 3)
		sort_three(orion);
	if (orion->len == 4)
		sort_four(orion);
	if (orion->len == 5)
		sort_five(orion);
}
