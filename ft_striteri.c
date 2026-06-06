/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 23:39:57 by rubi              #+#    #+#             */
/*   Updated: 2026/06/05 01:11:51 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
// Función auxiliar de prueba que pasaremos como argumento.
// Suma el valor del índice al carácter actual. 
// Por ejemplo: en el índice 1, la 'a' pasará a ser 'b' (a + 1).
void	modify_in_place(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	// Declaramos la cadena como un array de caracteres (char str[]) 
	// para que la memoria sea modificable. 
	// Si usamos (char *str = "aaa"), dará Segmentation Fault.
	char	str[] = "aaaaaa";

	printf("1. Cadena original: %s\n", str);

	// Llamamos a ft_striteri pasándole nuestra cadena y la función auxiliar
	ft_striteri(str, modify_in_place);

	// Debe imprimir: 
	// abcdef (ya que suma 0 a la primera 'a', 1 a la segunda, 2 a la tercera...)
	printf("2. Cadena modificada: %s\n", str);

	return (0);
}
*/