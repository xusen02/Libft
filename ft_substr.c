/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:00:39 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/03 16:18:25 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > s_len - start)
		len = s_len - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < len)
		ptr[i] = s[start + i];
	ptr[i] = '\0';
	return (ptr);
}
	// [0] [1] [2] [3] [4]
	//  H   E   L   L   O
	//  	^              ptr = 4 + 1 start = 1 len = 4 should be ELLO\0
	//
	//  	obj 2 
	// if len is 4 and it start from 2  
	// LLO??
	// need add to make len to 3	solution: 5 - 2
