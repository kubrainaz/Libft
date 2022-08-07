/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:47:40 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/17 17:12:40 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	substr = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!substr)
		return (substr);
	index = 0;
	while (index < sub_len)
		substr[index++] = s[start++];
	substr[index] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "kubrainaz";
	unsigned int start = 10;
	size_t len = 6;
	printf("%s", ft_substr(str, start, len));
}*/
