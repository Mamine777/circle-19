/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:18:34 by mokariou          #+#    #+#             */
/*   Updated: 2024/08/07 23:46:51 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

# define BUF_SIZE 1024

/*int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	fd = open(av[1], O_RDONLY); // open the file
		if (fd == -1){
			printf("fix your file\n");
			return (1);
		}
		char	buffer[BUF_SIZE] = {0};
		off_t seek = lseek(fd, (BUF_SIZE - 1), SEEK_SET); //seek the position
		if (seek == -1)
		{
			printf("problem in seek\n");
			close(fd);
			return  1;
		}
		ssize_t numread = read(fd, buffer, BUF_SIZE - 1);
		if (numread == -1)
		{
			printf("problem in numred\n");
			close(fd);
			return  1;
		}
		
		buffer[numread] = '\0';
		printf("%s\n", buffer);

		close(fd);
		return (0);
	}
	else
		printf("dumb\n");
}
*/

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			printf(">>>>abort<<<<\n");
			return (1);
		}
		ssize_t num_read;
		char buffer[BUF_SIZE];
		while (num_read = read(fd, buffer, BUF_SIZE - 1) > 0){
			buffer[BUF_SIZE] = '\0';
			printf("%s\n", buffer);	
		}
		if (num_read == -1)
		{
			printf(">>>>abort<<<<\n");
			close(fd);
			return (1);
		}
		close(fd);
		
	}
}