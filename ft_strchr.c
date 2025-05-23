/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:37:42 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:37:42 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s && *s != uc)
	{
		s++;
	}
	if (*s != uc)
	{
		return (NULL);
	}
	else
	{
		return ((char *)s);
	}
}
