/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:34:14 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/22 13:37:47 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size)
	{
		while (*src && size-- - 1)
			*dest++ = *src++;
		*dest = 0;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char dst[] = "kubra";
	char src[] = "inaz";
	size_t len = 2;
	printf("%zu", ft_strlcpy(dst, src, len));
}*/
