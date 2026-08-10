/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:16:26 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/29 18:49:20 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int	main(void)
{
	char			src[] = "Ayo chil";
	char			dest[20];
	unsigned int	ret;
	
	printf("Test 1 (Normal): dest = %s, return = %d\n", dest, ret);

	ret = ft_strlcpy(dest, src, 5);
	printf("Test 2 (Small):  dest = %s, return = %d\n", dest, ret);

	ret = ft_strlcpy(dest, src, 0);
	printf("Test 3 (Size 0): return = %d\n", ret);

	return (0);
}*/
