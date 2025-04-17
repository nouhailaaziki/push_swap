/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:24:03 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/17 10:11:46 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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
}	t_orion;

int		check_orderly(t_orion *orion);
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
void	exit_program(t_orion *orion);
void	extract_numbers(t_orion *orion);
void	check_duplicates(t_orion *orion);
void	*ft_calloc(size_t count, size_t size);
void	check_ops(char *line, t_orion *orion);
void	check_forbidden_chars(t_orion *orion);
void	merge_args(t_orion *orion, char **argv);
void	check_blank_str(char *str, t_orion *orion);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);

#endif
