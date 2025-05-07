/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-04 13:14:17 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-04 13:14:17 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	ft_word_len(const char *start, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (start[i] && start[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	*ft_malloc_and_copy(char const *s, char c)
{
	char	*split;
	size_t	len;
	size_t	i;

	len = ft_word_len(s, c);
	split = (char *)malloc(sizeof(char) * (len + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < len)
	{
		split[i] = s[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}

static void	ft_free_splits(char **result, size_t i)
{
	while (i--)
		free(result[i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	i;

	count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		result[i] = ft_malloc_and_copy(s, c);
		if (!result[i])
		{
			ft_free_splits(result, i);
			return (NULL);
		}
		s += ft_word_len(s, c);
		i++;
	}
	result[count] = NULL;
	return (result);
}
