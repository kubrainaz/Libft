/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:56:18 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/12 19:26:33 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>
int main(void)
{
    int fd = open("deneme1.txt", O_CREAT | O_RDWR, 0777);
    ft_putchar_fd ('a', fd);
	//ft_putchar_fd ('a', fd);
}*/
