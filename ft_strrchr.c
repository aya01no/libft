/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:39:04 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:39:04 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = NULL;
	while (*s)
	{
		if (*s == c)
		{
			found = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		found = (char *)s;
	}
	return (found);
}
