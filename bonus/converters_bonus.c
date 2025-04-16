/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:11:48 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 16:45:17 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long	ft_atoi(const char *str)
{
	long	i;
	long	s;
	long	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (((i > 9 && s == 1) || (i > 10 && s == -1))
			&& r > 2147483647)
			return (2147483648);
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r * s);
}

void	extract_numbers(t_orion *orion)
{
	orion->i = 0;
	orion->a = malloc(orion->len * sizeof(long));
	if (!orion->a)
		error(orion);
	while (orion->matrix[orion->i])
	{
		orion->a[orion->i] = ft_atoi(orion->matrix[orion->i]);
		if (orion->a[orion->i] > 2147483647
			|| orion->a[orion->i] < -2147483648)
			error(orion);
		orion->i++;
	}
}

void	merge_args(t_orion *orion, char **argv)
{
	char	*tmp;

	orion->i = 1;
	while (argv[orion->i])
	{
		check_blank_str(argv[orion->i], orion);
		tmp = ft_strjoin(orion->str, argv[orion->i]);
		free (orion->str);
		if (!tmp)
			error(orion);
		orion->str = tmp;
		tmp = ft_strjoin(orion->str, " ");
		free (orion->str);
		if (!tmp)
			error(orion);
		orion->str = tmp;
		orion->i++;
	}
}
