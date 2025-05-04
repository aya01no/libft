/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:39:09 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:39:09 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_in_s1(const char *str, char c)
{
	size_t	j;

	j = 0;
	while (str[j])
	{
		if (str[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*s1_trimed;

	start = 0;
	while (s1[start] && set_in_s1(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && set_in_s1(set, (s1[end - 1])))
		end--;
	s1_trimed = (char *)malloc(sizeof(*s1) * ((end - start) + 1));
	if (!s1_trimed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		s1_trimed[i] = s1[start];
		i++;
		start++;
	}
	s1_trimed[i] = '\0';
	return (s1_trimed);
}
