/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:55:08 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/05 12:08:59 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

// stack_ops.c (Core Stack Functions)
void	push(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	pop(int *stack, int *size);
void	swap(int *stack, int size);
void	rotate(int *stack, int size);
void	rev_rotate(int *stack, int size);

// ops.c (push_swap Instructions)
void	sa(int *stack_a, int size);
void	sb(int *stack_b, int size);
void	ss(int *stack_a, int *stack_b, int size_a, int size_b);
void	pa(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	pb(int *stack_a, int *stack_b, int *size_a, int *size_b);

// rotations.c (Rotations)
void	ra(int *stack_a, int size_a);
void	rb(int *stack_b, int size_b);
void	rr(int *stack_a, int *stack_b, int size_a, int size_b);
void	rra(int *stack_a, int size_a);
void	rrb(int *stack_b, int size_b);

// sort.c (Sorting Logic)
void	sort_3(int *stack_a);
void	sort_4(int *stack_a, int *stack_b, int size_a, int size_b);
void	sort_5(int *stack_a, int *stack_b, int size_a, int size_b);
void	chunk_sort(int *stack_a, int size_a);
void	radix_sort(int *stack_a, int size_a);

// input.c (Input & Validation)
int		parse_input(int argc, char **argv);
int		check_dup(int *stack, int size);
int		check_num(char *str);
int		is_sorted(int *stack, int size);
int		stack_size(int *stack);

// utils.c (Helpers & Memory)
int		find_min(int *stack, int size);
int		find_max(int *stack, int size);
int		stack_last(int *stack, int size);
void	free_stack(int *stack);
void	exit_error(void);

#endif
