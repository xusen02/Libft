/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:45:15 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/05 14:47:45 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*#include <fcntl.h>   // Needed for open()
int main(void)
{
    int my_file_descriptor;

    // 1. YOU open the text file first (this creates the file descriptor)
    my_file_descriptor = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // 2. NOW you can use ft_putchar_fd to write inside it
    ft_putstr_fd("hello", my_file_descriptor);

    // 3. Close the file when you are done
    close(my_file_descriptor);

    return (0);
}*/
