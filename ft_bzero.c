/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kinaz <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:32:11 by kinaz             #+#    #+#             */
/*   Updated: 2022/02/15 19:08:52 by kinaz            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	ft_memset(b, '\0', n);
}
/*int	main()
{
	char	isim[] = "kinaz";
	int	i = 0;

	ft_bzero(isim, 1);
	while (isim[i++] != 'z')
		write(1, &isim[i], 1);
}*/
