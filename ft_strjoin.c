/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 00:33:46 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/26 15:47:32 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ns;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ns = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ns[i] = s2[j];
		i++;
		j++;
	}
	ns[i] = '\0';
	return (ns);
}

/*
int	main(void)
{
	char	*cadena1 = "Hola, ";
	char	*cadena2 = "estoy en 42!";
	char	*resultado;

	printf("--- PROBANDO FT_STRJOIN ---\n\n");
	printf("Cadena 1: \"%s\"\n", cadena1);
	printf("Cadena 2: \"%s\"\n", cadena2);

	// Llamamos a tu función para unirlas
	resultado = ft_strjoin(cadena1, cadena2);

	// Comprobamos si el malloc falló o si se activó la protección contra NULL
	if (resultado == NULL)
	{
		printf("\nError: La función devolvió NULL.\n");
		return (1);
	}

	// Si todo va bien, imprimimos el resultado esperado: "Hola, estoy en 42!"
	printf("\nResultado de la unión: \"%s\"\n", resultado);

	free(resultado);

	return (0);
}
*/