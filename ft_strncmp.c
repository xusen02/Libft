/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:13:30 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 15:16:35 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*int main ()
{
        char s1[] = "aaaaab";
        char s2[] = "aaaaac";
        int n = 0;
        int res;

        res = strncmp(s1, s2, n);
	printf("s1: %s\ns2: %s\nreturn value: %d\n", s1, s2, res);
        printf("only check till: %d\n", n);

        if (res == 0)
        {
                printf("is equal\n");
        }
        else if(res > 0)
        {
                printf("s1 is greater\n");
        }
        else
        {
                printf("s2 in greater\n");
        }
        return(0);
}*/
