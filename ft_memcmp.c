/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:37:02 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:37:02 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ucs1 != *ucs2)
		{
			return ((*ucs1 - *ucs2));
		}
		else
		{
			ucs1++;
			ucs2++;
		}
		n--;
	}
	return (0);
}
