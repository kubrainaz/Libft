/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:55:19 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/12 17:35:03 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_putstr(unsigned int i, char *s)
{
	*s -= 32;
}

int main(void)
{
	char str[] = "kubra";

	ft_striteri(str, &ft_putstr);
	printf("%s\n", str); 
	return (0);
}*/
