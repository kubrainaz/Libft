/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:58:18 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/22 14:43:15 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
		while (*s != '\0')
			ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("deneme6.txt", O_CREAT |O_RDWR, 0777);
	ft_putendl_fd("kubra", fd);
}
*/
