/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:24:03 by noaziki           #+#    #+#             */
/*   Updated: 2025/04/09 14:05:00 by noaziki          ###   ########.fr       */
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
	int		len;
	char	*str;
	char	**matrix;
	long	*arr;
}	t_orion;

char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
void	merge_args(t_orion *orion, char **argv);
void	check_forbidden_chars(t_orion *orion);
void	check_blank_str(char *str, t_orion *orion);
void	extract_numbers(t_orion *orion);
void	error(t_orion *orion);
void	check_duplicates(t_orion *orion);
size_t	ft_strlen(const char *s);

#endif
