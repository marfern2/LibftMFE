/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 01:23:58 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 19:58:49 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;
	int		i;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	new_str = malloc((end - start) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	len = end - start;
	while (i < len)
	{
		new_str[i++] = s1[start++];
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
int main(void)
{
    // 1. Cadena original con caracteres "sucios" al inicio y al final
    char const *original = "...   ¡Hola Mundo!   ...";
    
    // 2. Definimos el 'set': qué caracteres queremos eliminar
    // Queremos quitar puntos (.), espacios ( ) y los signos de exclamación (¡ !)
    char const *caracteres_a_quitar = ". ¡!";
    
    // 3. Llamamos a la función
    char *resultado = ft_strtrim(original, caracteres_a_quitar);
    
    // 4. Comprobamos si el malloc funcionó correctamente
    if (resultado == NULL)
    {
        printf("Error: Fallo en la reserva de memoria.\n");
        return (1);
    }
    
    // 5. Mostramos los resultados
    printf("Original:  \"%s\"\n", original);
    printf("Recortada: \"%s\"\n", resultado); // Salida: "Hola Mundo"
    
    free(resultado);
    
    return (0);
}
*/