/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:52:29 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 20:18:38 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
int	main(void)
{
	// 1. Creamos un texto largo (ocupa muchos bytes)
	char *texto_pesado = strdup("Este texto ocupa bytes en la memoria RAM...");

	// 2. Creamos el nodo pasando el texto como contenido
	t_list *mi_nodo = ft_lstnew(texto_pesado);

	// 3. Comprobamos si malloc funcionó
	if (!mi_nodo)
		return (1);

	// 4. Imprimimos los tamaños en bytes para ver la magia
	printf("--- DEMOSTRACIÓN DE TAMAÑOS ---\n");
	printf("Tamaño del texto real: %lu bytes\n", strlen(texto_pesado) + 1);
	printf("Tamaño t_list (el nodo): %lu bytes\n\n", sizeof(t_list));

	// 5. Demostramos cómo accedemos al contenido
	// Como 'content' es void*, le hacemos cast a (char*) pa imprimirlo con %s
	printf("--- CONTENIDO DEL NODO ---\n");
	printf("Contenido guardado: %s\n\n", (char *)mi_nodo->content);

	// 6. Direcciones de memoria (Demuestra que 'content' apunta a otra parte)
	printf("--- DIRECCIONES DE MEMORIA ---\n");
	printf("Dirección del nodo en el heap:    %p\n", mi_nodo);
	printf("Dirección que apunta next:  %p (Está vacío)\n", mi_nodo->next);
	printf("Dirección de la variable content: %p\n", mi_nodo->content);
	printf("Dirección texto original: %p (¡Mismo que content!)\n", texto_pesado);

	// 7. Limpieza de memoria (¡Fundamental en 42 para evitar leaks!)
	free(texto_pesado);
	free(mi_nodo);

	return (0);
}
*/