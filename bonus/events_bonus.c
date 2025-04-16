/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:33:53 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 16:44:31 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
