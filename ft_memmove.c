/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:33:39 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/10 18:34:00 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d > s)
	{
		while (len-- > 0)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- > 0)
			*(d++) = *(s++);
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "merhaba";
	ft_memmove(str + 3, str, 4);
	printf ("%s", str);
}*/
