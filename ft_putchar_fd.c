/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: txu-sen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:52:19 by txu-sen           #+#    #+#             */
/*   Updated: 2026/08/05 14:46:55 by txu-sen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write (fd, &c, 1);
}
/*#include <fcntl.h>
int main(void)
{
    int my_file_descriptor;

    // 1. YOU open the text file first (this creates the file descriptor)
    my_file_descriptor = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    // 2. NOW you can use ft_putchar_fd to write inside it
    ft_putchar_fd('A', my_file_descriptor);

    // 3. Close the file when you are done
    close(my_file_descriptor);

    return (0);
}*/
