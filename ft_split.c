/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 03:50:51 by rubi              #+#    #+#             */
/*   Updated: 2026/06/04 04:31:38 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_matrix(char **matrix, int i)
{
	while (i > 0)
	{
		i--;
		free(matrix[i]);
	}
	free(matrix);
	return (NULL);
}

// Nueva función auxiliar para rellenar la matriz de forma segura
static char	**fill_matrix(char **matrix, char const *s, char c)
{
	int	i;
	int	start;
	int	len;

	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		len = 0;
		while (s[start + len] && s[start + len] != c)
			len++;
		if (len > 0)
		{
			matrix[i] = ft_substr(s, start, len);
			if (!matrix[i])
				return (free_matrix(matrix, i));
			i++;
		}
		start += len;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!matrix)
		return (NULL);
	return (fill_matrix(matrix, s, c));
}

/*
int	main(void)
{
	char	*str;
	char	**result;
	int		i;

	str = "   Hola   compañero de 42  Madrid   ";
	i = 0;
	
	printf("Cadena original: \"%s\"\n", str);
	printf("Separador: ' '\n\n");

	// Ejecuta tu función split usando el espacio como delimitador
	result = ft_split(str, ' ');
	if (!result)
	{
		printf("Error: la asignación de memoria falló.\n");
		return (1);
	}

	// Imprime cada palabra obtenida hasta llegar al puntero NULL del final
	while (result[i] != NULL)
	{
		printf("Palabra [%d]: %s\n", i, result[i]);
		free(result[i]); // Libera cada sub-cadena individual
		i++;
	}

	// Libera la matriz principal de punteros
	free(result);

	return (0);
}
*/