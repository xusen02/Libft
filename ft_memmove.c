/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:21:05 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 12:24:10 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

static void	*ft_move_forward(char *d, const char *s, size_t size, void *dest)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

static void	*ft_move_backward(char *d, const char *s, size_t size, void *dest)
{
	size_t	i;

	i = size;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == s || size == 0)
		return (dest);
	if (d < s)
		return (ft_move_forward(d, s, size, dest));
	return (ft_move_backward(d, s, size, dest));
}
/*first tas (same array but start from different index)
 * speed i need this...
 * memory address: [0] [1] [2] [3] [4] [5]
 *src:              A   B   C   D
 *Dest [1]:             A   B   C   D

 second tas (if selfoverlapping
 speed want to put c on index 0 in the same array
 memory: [0] [1] [2]
data      a   b     
            */
/*int main(void)
{
	char dest1[20] = "Hello, world!";
	char src1[] = "42";
	ft_memmove(dest1, src1, 5);
	printf("Test 1(Basic): %s\n", dest1);
	
	char buff[] = "abcdefgh";
	ft_memmove(buff + 1, buff,4);
	printf("Test 2 (dest <src): %s\n", buff);
	
	char buff1[] = "abcdefgh";
	ft_memmove(buff1, buff1 + 2, 4);
	printf("Thest 3(dest > src): %s\n", buff1);
}*/
