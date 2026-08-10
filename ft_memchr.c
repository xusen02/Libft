/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:17:11 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 16:29:24 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		target;

	p = (const unsigned char *)s;
	target = (unsigned char)c;
	while (n > 0)
	{
		if (*p == target)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
/*int main ()
{
	const char text[] = "KONO Giorno Giovanna";
	char *ptr = ft_memchr(text, 'G', 6);

	if (ptr != NULL)
	{
		printf("%s\n",ptr);
	}
	return 0;
}*/
