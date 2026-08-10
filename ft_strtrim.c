/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:41:45 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/05 16:19:57 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	ikuyo;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	ikuyo = 0;
	while (s1[ikuyo] && is_in_set(s1[ikuyo], set))
		ikuyo++;
	end = ft_strlen(s1);
	while (end > ikuyo && is_in_set(s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - ikuyo + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (ikuyo < end)
		ptr[i++] = s1[ikuyo++];
	ptr[i] = '\0';
	return (ptr);
}
