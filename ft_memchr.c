/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-29 07:39:16 by ayayamad          #+#    #+#             */
/*   Updated: 2025-04-29 07:39:16 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uis;

	uis = (unsigned char *)s;
	while (n > 0 && *uis != c)
	{
		uis++;
		n--;
	}
	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		return (uis);
	}
}
