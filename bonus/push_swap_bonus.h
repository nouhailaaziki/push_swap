/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:06:11 by noaziki           #+#    #+#             */
/*   Updated: 2025/02/05 12:10:49 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>

// ops_bonus.c (Reads & Executes Instructions)
void	read_ops(void);
void	exec_ops(char *op);
void	apply_sa(int *stack_a, int size_a);
void	apply_sb(int *stack_b, int size_b);
void	apply_ss(int *stack_a, int *stack_b, int size_a, int size_b);

// moves_bonus.c (Handles Push & Rotate Ops)
void	apply_pa(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	apply_pb(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	apply_ra(int *stack_a, int size_a);
void	apply_rb(int *stack_b, int size_b);
void	apply_rr(int *stack_a, int *stack_b, int size_a, int size_b);

// utils_bonus.c (Validation & Output)
int		is_valid_op(char *op);
int		validate_sort(int *stack_a, int size_a);
void	print_ok(void);
void	print_ko(void);
void	exit_error(void);

#endif
