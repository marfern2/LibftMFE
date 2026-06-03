/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 03:24:45 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 03:43:43 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == ((unsigned char) c))
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char s[] = "Hola Mundo";
	int c = 'M';
	char *res = (char *)ft_memchr(s, c, 6);
	printf("%s\n", res);
	return (0);
}
*/