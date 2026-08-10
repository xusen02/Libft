/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 16:05:01 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/03 12:25:58 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (s[len])
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	ft_bzero(dest, len + 1);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
    char *original = "Hello, 42!";
    char *duplicate = ft_strdup(original);

    if (duplicate != NULL)
    {
        printf("Duplicated string: %s\n", duplicate);

        free(duplicate);
    }
    return (0);
}*/
