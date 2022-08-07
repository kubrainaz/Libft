/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:39:35 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/19 18:04:00 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *)s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s[] = "kubrainaz";
	int c = 'a';
	printf("%s", ft_strrchr(s,c));
}*/
