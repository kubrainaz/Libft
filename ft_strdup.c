/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:47:02 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/12 13:31:43 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*c;

	i = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i] = 0;
	while (i--)
		c[i] = s[i];
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_strdup("Hello World!"));
	return (0);
}*/
