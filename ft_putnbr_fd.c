/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 11:40:34 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-07 11:40:34 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		str[13];
	int			i;
	long long	lln;

	lln = (long long)n;
	if (lln < 0)
	{
		lln = -lln;
		write(fd, "-", 1);
	}
	if (lln == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	i = 0;
	while (lln > 0)
	{
		str[i++] = '0' + (lln % 10);
		lln /= 10;
	}
	while (i-- > 0)
		write(fd, &str[i], 1);
}
