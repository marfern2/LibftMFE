/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 23:25:38 by rubi              #+#    #+#             */
/*   Updated: 2026/06/05 01:44:03 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	if (!s || !f)
		return (NULL);
	newstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
// Función auxiliar de prueba que pasaremos como argumento a ft_strmapi
// Si el índice es par, convierte a mayúscula. Si es impar, a minúscula.
char	modify_char(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
	}
	return (c);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "abcdefghijkl";
	printf("1. Cadena original: %s\n", str);

	// Llamamos a ft_strmapi pasándole nuestra función auxiliar
	result = ft_strmapi(str, modify_char);

	if (result == NULL)
	{
		printf("Error: La asignación de memoria falló.\n");
		return (1);
	}

	// Debe imprimir: AbCdEfGhIjKl
	printf("2. Cadena modificada: %s\n", result);

	// ¡Obligatorio! Liberar la memoria que ft_strmapi reservó con malloc
	free(result);

	return (0);
}
*/