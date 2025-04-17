/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 10:33:53 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/17 10:14:33 by noaziki          ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	check_ops(char *line, t_orion *orion)
{
	if (!ft_strncmp(line, "sa\n", 3))
		sa(orion, NULL);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(orion, NULL);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(orion, NULL);
	else if (!ft_strncmp(line, "pa\n", 3))
		pa(orion, NULL);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(orion, NULL);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(orion, NULL);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(orion, NULL);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(orion, NULL);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(orion, NULL);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(orion, NULL);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(orion, NULL);
	else
		(free(line), error(orion));
	free(line);
}
