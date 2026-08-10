/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 18:51:15 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 12:55:41 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*int main()
{
	char text[] = "Hello, World! 2026";
	for (int i = 0; text[i] != '\0'; i++)
	{
		text[i] = ft_toupper(text[i]);
	}
	printf("%s\n", text);
	return(0);
}*/
