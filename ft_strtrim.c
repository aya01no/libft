/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 10:39:09 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 10:39:09 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//setと一致するもの探し　範囲指定必要
char	*ft_found(char set, char *str)
{
	size_t	j;

	j = 0;
	while (set)
	{
		if (set_found[j] == set)
			return (1);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*start;
	char	*end;
	//一文字ずつfoundにまわす　回し続ける条件は終端まで？もしくは、
	//
	while (ft_found(*s1, ft_strlen(*s1)))
		start++;
}
