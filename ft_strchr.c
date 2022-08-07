/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:39:01 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/10 18:39:17 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "kubra";
	char ch = 'b';
	char *ret;

	ret = ft_strchr(str, ch);
	printf("%c 'den sonrasının devamı:  %s", ch, ret);
	return (0);
}*/
