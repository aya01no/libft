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
	char		*s_copy;

	s_len = ft_strlen(s) + 1;
	s_copy = (char *)ft_calloc(s_len, sizeof(char));
	ft_strlcpy(s_copy, s, s_len);
	return (s_copy);
}
