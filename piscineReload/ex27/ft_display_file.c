/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 23:55:26 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/08 15:24:49 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

# define BUF_SIZE 4096

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	fd;
		
		fd = open(av[1], O_RDONLY);
		if (fd ==-1)
		{
			write(1, "File name missing\n", 18);
			return (1);
		}
		ssize_t num_read;
		char buffer[BUF_SIZE];
		while ((num_read = read(fd, buffer, BUF_SIZE - 1)) > 0)
			write(1, buffer, num_read);
		if (num_read == -1)
		{
			write(1, ">>>abort<<<\n", 12);
			close (fd);
			return (1);
		}
		close(fd);
	}
	else if (ac >= 3)
		write(1, "Too many argument\n", 19);
	else
		write(1, "File name missing\n", 18);
}
