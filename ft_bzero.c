/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:20:15 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 23:37:10 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char s[] = "Hola Mundo";
	ft_bzero(s, 3);
	size_t i = 0;

	// Primer bucle: Muestra los números ASCII (los ceros)
	while (i < 10)
	{
		printf("%d ", s[i]);
		i++;
	}
	printf("\n\n");

	i = 0; // Reiniciamos el contador para el segundo bucle

	// Segundo bucle: Muestra los caracteres visibles restantes
	while (i < 10)
	{
		ft_putchar(s[i]);
		i++;
	}
	printf("\n");
}
*/