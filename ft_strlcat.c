/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:31:25 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/03 12:25:00 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	s_len = 0;
	while (src[s_len])
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	i = d_len;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}
/*int main(void)
{
	char dest1[20] = "very the";
	char *src1 = "sad";
	unsigned int res1 = ft_strlcat(dest1, src1, 1);
	printf("Test 1 (Normal): [%s] Return: %u", dest1, res1);
	return(0);
}*/
