/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 23:48:18 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/26 15:46:14 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int	main(void)
{
	char	*texto = "Piscina";
	char	*resultado;

	// Llamamos a la función: queremos 3 letras empezando en el índice 2
	resultado = ft_substr(texto, 2, 3);

	if (resultado == NULL)
	{
		printf("Error: falló el malloc\n");
		return (1);
	}

	// Imprimimos el resultado esperado: "sci"
	printf("Subcadena obtenida: %s\n", resultado);

	// Liberamos la memoria que reservó tu ft_substr
	free(resultado);

	return (0);
}
*/