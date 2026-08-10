/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 12:56:22 by txu-sen           #+#    #+#             */
/*   Updated: 2026/07/30 13:22:51 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*int main ()
{
	char text[] = "Best Moment Unemployed!";
	for (int i = 0; text[i] != '\0'; i++)
	{
		text[i] = tolower(text[i]);
	}
	printf("%s\n", text);
	return (0);
}*/
