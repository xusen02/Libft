/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:24:14 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/12 11:47:04 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char)c;
	while (*s != '\0')
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
int  main ()
{
	const char* text = "Hellow evernia nice to meet u am fine thank q";
	char *ptr = ft_strchr(text, 'e');

	if (ptr != NULL)
	{
		printf("remaining test: %s\n",ptr);
		int index = ptr - text;
	}
	else
	{
		printf("not found\n");
	}
	return 0;
}
