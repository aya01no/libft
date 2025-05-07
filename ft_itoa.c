/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 05:38:49 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-07 05:38:49 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long long num)
{
	int	len;

	len = 1;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			negative;
	int			len;
	char		*itoa;
	long long	num;

	num = (long long)n;
	negative = (num < 0);
	if (negative)
		num = -num;
	len = ft_len(num) + negative + 1;
	itoa = (char *)malloc(sizeof(char) * (len));
	if (!itoa)
		return (NULL);
	itoa[--len] = '\0';
	while (len -- > negative)
	{
		itoa[len] = '0' + (num % 10);
		num /= 10;
	}
	if (negative)
		itoa[0] = '-';
	return (itoa);
}
