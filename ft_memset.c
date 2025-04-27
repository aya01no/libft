/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 04:52:14 by ayayamad          #+#    #+#             */
/*   Updated: 2025-04-26 04:52:14 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*m;

	m = (char *)s;
	i = 0;
	while (i < n)
	{
		m[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
