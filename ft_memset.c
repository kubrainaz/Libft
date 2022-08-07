/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:31:31 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/19 16:25:37 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len-- > 0)
	{
		*(str++) = (unsigned char)c;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "kubra";
	int c = '*';
	size_t len = 3;
	printf("%s",ft_memset(s,c,len));
}*/
