/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:53:23 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/22 13:18:47 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0 || n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		slen;
	const char	*digits;

	digits = "0123456789";
	slen = get_digits(n);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (0);
	str[slen] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--slen] = digits[n % 10];
		else
			str[--slen] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
/*int main()
{
	int c = 123;
	printf("%s", ft_itoa(c));
}*/
