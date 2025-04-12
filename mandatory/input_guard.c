/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_guard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:21:42 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/09 14:55:36 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_orion *orion)
{
	long	j;
	long	n;

	j = 0;
	while (j < orion->len - 1)
	{
		n = j + 1;
		while (n < orion->len)
		{
			if (orion->a[j] == orion->a[n])
				error(orion);
			n++;
		}
		j++;
	}
}

void	check_blank_str(char *str, t_orion *orion)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		error(orion);
	else
	{
		i = 0;
		while (str[i] && str[i] == 32)
			i++;
		if (!str[i])
			error(orion);
	}
}

void	check_forbidden_chars(t_orion *orion)
{
	orion->i = 0;
	while (orion->matrix[orion->i])
	{
		orion->j = 0;
		while (orion->matrix[orion->i][orion->j])
		{
			if (orion->matrix[orion->i][orion->j] == '+'
				|| orion->matrix[orion->i][orion->j] == '-')
			{
				if (!orion->matrix[orion->i][orion->j + 1]
					|| (orion->matrix[orion->i][orion->j + 1] < '0'
					|| orion->matrix[orion->i][orion->j + 1] > '9'))
					error(orion);
				if (orion->j > 0
					&& orion->matrix[orion->i][orion->j - 1] != ' ')
					error(orion);
			}
			else if (orion->matrix[orion->i][orion->j] < '0'
				|| orion->matrix[orion->i][orion->j] > '9')
				error(orion);
			orion->j++;
		}
		orion->i++;
	}
}
