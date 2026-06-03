/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 17:12:05 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 01:01:52 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}

/*
int	main(void)
{
	// Prueba 1: Copia normal (igual que memcpy)
	char origen_str[] = "Piscine 42";
	char destino_str[20] = {0};

	printf("--- Prueba 1: Copia Normal ---\n");
	ft_memmove(destino_str, origen_str, 7);
	printf("Destino (debe ser 'Piscine'): %s\n\n", destino_str);

	// Prueba 2: Remplazar
	// Queremos mover "12345" dos posiciones a la derecha dentro del mismo array
	char datos[] = "123456789";

	printf("--- Prueba 2: Solapamiento (Overlap) ---\n");
	// Origen apunta a '1' (datos) y Destino apunta a '3' (datos + 2)
	// Copiamos 5 bytes: el '1', '2', '3', '4', '5'
	ft_memmove(datos + 2, datos, 5);
	
	// El resultado correcto debe ser "121234589"
	printf("Resultado con solapamiento: %s\n", datos);

	return (0);
}
*/