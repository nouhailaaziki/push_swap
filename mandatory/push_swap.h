/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:24:03 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/16 15:33:38 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_orion
{
	int		i;
	int		j;
	int		max;
	long	min;
	int		len;
	int		a_len;
	int		b_len;
	char	*str;
	char	**matrix;
	long	*a;
	long	*b;
	long	*sorted;
}	t_orion;

void	sa(t_orion *orion, char *str);
void	sb(t_orion *orion, char *str);
void	ss(t_orion *orion, char *str);
void	pa(t_orion *orion, char *str);
void	pb(t_orion *orion, char *str);
void	ra(t_orion *orion, char *str);
void	rb(t_orion *orion, char *str);
void	rr(t_orion *orion, char *str);
void	rra(t_orion *orion, char *str);
void	rrb(t_orion *orion, char *str);
void	rrr(t_orion *orion, char *str);
void	error(t_orion *orion);
void	sort_big(t_orion *orion);
void	sort_four(t_orion *orion);
void	sort_five(t_orion *orion);
char	*ft_strdup(const char *s);
void	sort_three(t_orion *orion);
void	applay_ops(t_orion *orion);
void	exit_program(t_orion *orion);
void	track_max_pos(t_orion *orion);
void	sort_array(long *arr, int len);
void	extract_numbers(t_orion *orion);
void	check_duplicates(t_orion *orion);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t count, size_t size);
void	check_forbidden_chars(t_orion *orion);
void	merge_args(t_orion *orion, char **argv);
void	check_blank_str(char *str, t_orion *orion);
char	*ft_strjoin(char const *s1, char const *s2);
void	push_back(t_orion *orion, int *i, int *max_i);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	push_by_chunks(t_orion *orion, long *sorted, int chunk_size, int i);
int		check_orderly(t_orion *orion);
int		get_index_in_sorted(long *sorted, int len, long value);
size_t	ft_strlen(const char *s);

#endif
