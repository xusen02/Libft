/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:39:11 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/12 11:47:59 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	char	*last_found;

	target = (char)c;
	last_found = NULL;
	while (*s != '\0')
	{
		if (*s == target)
			last_found = (char *)s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (last_found);
}
int main()
{
	const char* text = "Hellow evernia nice to meet u am fine thank q";
	char *ptr = ft_strrchr(text, 'e');

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
