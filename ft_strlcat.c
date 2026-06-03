/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 00:20:44 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 02:40:54 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	j = dst_len;
	while (src[i] != '\0' && j < (size - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_len + src_len);
}

/*
int	main(void)
{
	char dest[15] = "Hola";
	char *src = "Mundo";
	size_t res;

	// Pasamos un size de 10. Debería concatenar todo sin problemas
	res = ft_strlcat(dest, src, 10);

	printf("Cadena concatenada: %s\n", dest); 
	printf("Valor devuelto: %zu\n", res); 

	return (0);
}
*/