/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 09:49:14 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-07 09:49:14 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * s_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	str[s_len - 1] = '\0';
	while (i < s_len - 1)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
