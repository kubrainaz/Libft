/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:00:23 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/22 15:44:28 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		s[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	while (i--)
		write(fd, s + i, 1);
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("deneme8.txt", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd (512, fd);
}*/
