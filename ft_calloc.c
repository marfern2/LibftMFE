/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:12:00 by marfern2          #+#    #+#             */
/*   Updated: 2026/05/25 23:59:03 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> 

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count && size > (size_t)-1 / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int	main(void)
{
	int	*mi_array;
	size_t	num_elementos = 5;
	size_t	i;

	printf("--- PROBANDO FT_CALLOC ---\n\n");

	// 1. Pedimos memoria para 5 números enteros (5 * 4 bytes = 20 bytes)
	mi_array = (int *)ft_calloc(num_elementos, sizeof(int));

	// 2. Comprobamos si la asignación falló
	if (mi_array == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return (1);
	}

	// 3. Imprimimos los valores para verificar que FT_BZERO hizo su trabajo
	printf("Valores inicializados por tu ft_calloc:\n");
	i = 0;
	while (i < num_elementos)
	{
		printf("Posición [%zu]: %d\n", i, mi_array[i]);
		i++;
	}

	// 4. Modificamos un valor solo para demostrar que la memoria funciona bien
	mi_array[2] = 42;
	printf("\nModificamos la posición [2] con el número: %d\n", mi_array[2]);

	// 5. SIEMPRE liberamos la memoria al terminar
	free(mi_array);
	printf("\nMemoria liberada correctamente.\n");

	return (0);
}
*/