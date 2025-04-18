/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:07:20 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/17 10:35:16 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checker(t_orion *orion)
{
	char	*line;

	orion->a_len = orion->len;
	orion->b_len = 0;
	line = get_next_line(0);
	while (line)
	{
		check_ops(line, orion);
		line = get_next_line(0);
	}
	if (!check_orderly(orion) && orion->b_len == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit_program(orion);
}

void	init_orion(t_orion *orion)
{
	orion->a = NULL;
	orion->b = NULL;
	orion->matrix = NULL;
	orion->str = NULL;
}

int	main(int argc, char **argv)
{
	t_orion	orion;

	init_orion(&orion);
	if (argc > 1)
	{
		merge_args(&orion, argv);
		orion.matrix = ft_split(orion.str, ' ');
		if (!orion.matrix)
			(free(orion.str), error(NULL));
		(free(orion.str), check_forbidden_chars(&orion));
		orion.len = 0;
		while (orion.matrix[orion.len])
			orion.len++;
		(extract_numbers(&orion), check_duplicates(&orion));
		orion.b = ft_calloc(orion.len, sizeof(long));
		if (!orion.b)
			error(&orion);
		checker(&orion);
	}
	return (0);
}
