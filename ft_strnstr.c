/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 04:13:38 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 20:06:51 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define _GNU_SOURCE  
//#include <bsd/string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*big = "Foo Bar Baz";
	char		*res_orig;
	char		*res_mia;

	printf("--- TEST 1: Éxito normal (Buscando 'Bar' con len = 10) ---\n");
	res_orig = strnstr(big, "Bar", 10);
	res_mia = ft_strnstr(big, "Bar", 10);
	printf("Original: %s\n", res_orig);
	printf("Mia     : %s\n\n", res_mia;

	printf("TEST 2: Límite estricto (Buscando 'Bar' con len = 6, no cabe)\n");
	res_orig = strnstr(big, "Bar", 6);
	res_mia = ft_strnstr(big, "Bar", 6);
	printf("Original: %s\n", res_orig ? res_orig : "NULL (No encontrada)");
	printf("Mia     : %s\n\n", res_mia ? res_mia : "NULL (No encontrada)");

	printf("--- TEST 3: Palabra inexistente (Buscando 'Hola') ---\n");
	res_orig = strnstr(big, "Hola", 11);
	res_mia = ft_strnstr(big, "Hola", 11);
	printf("Original: %s\n", res_orig ? res_orig : "NULL");
	printf("Mia     : %s\n\n", res_mia ? res_mia : "NULL");

	printf("--- TEST 4: Caso especial (Buscando cadena vacía '') ---\n");
	res_orig = strnstr(big, "", 5);
	res_mia = ft_strnstr(big, "", 5);
	printf("Original: %s\n", res_orig);
	printf("Mia     : %s\n", res_mia);

	return (0);
}
*/