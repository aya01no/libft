/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:39:15 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:39:15 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > s_len - start)
		len = s_len - start;
	dst = (char *)malloc(len + 1 * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		dst[i] = s[start + i];
		start++;
		i++;
	}
	dst[i] = 0;
	return (dst);
}
