/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 02:05:42 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/26 15:05:13 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen(s);
	while (len != 0)
	{
		if (s[len] == (char) c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	if (s[0] == (char) c)
	{
		return ((char *)&s[0]);
	}
	return (NULL);
}

/*
int	main(void)
{
	const char s[] = "Hola esta es de las frases con salecilas";
	int c = 'l';
	char *res = strrchr(s,c);
	printf("%s\n\n", res);
	
	const char s2[] = "Hola esta es de las frases con salecilas";
	int c2 = 'l';
	char *res2 = ft_strrchr(s2,c2);
	printf("%s", res2);	
}
*/