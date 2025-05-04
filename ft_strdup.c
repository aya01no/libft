/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-01 06:37:40 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-01 06:37:40 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		s_len;
	char		*s_cpy;

	s_len = ft_strlen(s) + 1;
	s_cpy = (char *)malloc(s_len * sizeof (*s_cpy));
	if (s_cpy == 0)
	{
		return (NULL);
	}
	ft_strlcpy(s_cpy, s, s_len);
	return (s_cpy);
}
