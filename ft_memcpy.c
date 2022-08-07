/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:32:58 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/19 16:29:51 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (!dst && !src)
		return (0);
	d = dst;
	s = src;
	while (n-- > 0)
	{
		*(d++) = *(s++);
	}
	return (dst);
}
/*
#include <stdio.h>
int main() 
{
	char s[] = "test";
	char d[] = "aba";
	printf("%s", ft_memcpy(s,d,3));
}*/
