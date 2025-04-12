/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:07:20 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/12 16:49:47 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_orion	orion;

	orion.a = NULL;
	orion.b = NULL;
	orion.matrix = NULL;
	if (argc > 1)
	{
		orion.str = ft_strdup("");
		if (!orion.str)
			error(&orion);
		merge_args(&orion, argv);
		orion.matrix = ft_split(orion.str, ' ');
		free(orion.str);
		check_forbidden_chars(&orion);
		orion.len = 0;
		while (orion.matrix[orion.len])
			orion.len++;
		extract_numbers(&orion);
		check_duplicates(&orion);
		orion.b = ft_calloc(orion.len, sizeof(long));
		if (!orion.b)
			error(&orion);
		applay_ops(&orion);
	}
	return (0);
}
