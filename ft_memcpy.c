/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:49:35 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 01:01:50 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
int main(void)
{
	// Prueba 1: Con una cadena de texto (strings)
	char origen_str[] = "Campus 42";
	char destino_str[20] = {0}; // Lleno de ceros

	printf("--- Prueba 1: Strings ---\n");
	ft_memcpy(destino_str, origen_str, 6); // Copia solo "Campus" (6 bytes)
	printf("Origen:  %s\n", origen_str);
	printf("Destino (debe ser 'Campus'): %s\n\n", destino_str);

	// Prueba 2: Con números enteros (arrays de int)
	int origen_int[] = {100, 200, 300};
	int destino_int[3] = {0};

	printf("--- Prueba 2: Enteros ---\n");
	// Copiamos los 3 enteros. Cada int ocupa 4 bytes, total: 3 * 4 = 12 bytes
	ft_memcpy(destino_int, origen_int, 3 * sizeof(int)); 
	printf("Destino int[0]: %d (debe ser 100)\n", destino_int[0]);
	printf("Destino int[1]: %d (debe ser 200)\n", destino_int[1]);
	printf("Destino int[2]: %d (debe ser 300)\n", destino_int[2]);

	return (0);
}
*/