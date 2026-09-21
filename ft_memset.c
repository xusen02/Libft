/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:18:19 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 12:34:08 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*word;
	size_t			i;

	word = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		word[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
