/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:07:20 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/09 14:03:38 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_orion	orion;

	if (argc > 1)
	{
		merge_args(&orion, argv);
		orion.matrix = ft_split(orion.str, ' ');
		free(orion.str);
		check_forbidden_chars(&orion);
		orion.len = 0;
		while (orion.matrix[orion.len])
			orion.len++;
		extract_numbers(&orion);
		check_duplicates(&orion);
	}
	return (0);
}
