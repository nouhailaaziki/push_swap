/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:33:53 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/09 11:58:08 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_orion *orion)
{
	orion->i = 0;
	orion->j = 0;
	if (orion->matrix)
	{
		while (orion->matrix[orion->i])
		{
			free(orion->matrix[orion->i]);
			orion->i++;
		}
	}
	free (orion->matrix);
	if (orion->arr)
		free(orion->arr);
	write(1, "Error\n", 7);
	exit (1);
}
