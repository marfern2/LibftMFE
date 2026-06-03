/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 20:19:01 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 20:58:10 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	// Creamos puntero que representará el inicio de nuestra lista
	// Al principio está completamente vacía (NULL)
	t_list	*mi_lista = NULL;

	// Creación de 3 nodos independientes con contenido diferente
	t_list	*nodo1 = ft_lstnew("Primer vagón (A)");
	t_list	*nodo2 = ft_lstnew("Segundo vagón (B)");
	t_list	*nodo3 = ft_lstnew("Tercer vagón (C)");

	// Vamos a meterlos en la lista usando ft_lstadd_front.
	// Como añade por el principio, el último que metamos quedará el primero.
	ft_lstadd_front(&mi_lista, nodo1);
	ft_lstadd_front(&mi_lista, nodo2);
	ft_lstadd_front(&mi_lista, nodo3);

	// --- AQUÍ EMPIEZA EL VIAJE SALTANDO DE PUNTERO EN PUNTERO ---
	printf("--- RECORRIENDO LA LISTA ENLAZADA ---\n\n");

	// Usamos puntero auxiliar 'aux' para recorrer lista sin perder inicio
	t_list	*aux = mi_lista;
	int		contador = 1;

	// Mientras 'aux' no sea NULL (es decir, mientras queden t_list)
	while (aux != NULL)
	{
		// 1. Imprimimos los datos del vagón actual
		printf("Vagón número: %d\n", contador);
		printf("Dirección de este nodo en la RAM: %p\n", aux);
		printf("Contenido guardado en content:    %s\n", (char *)aux->content);
		printf("Dirección a la que apunta next:   %p\n", aux->next);
		printf("--------------------------------------------------\n");

		// 2. LINEA DE SALTO
		// Le decimos a 'aux' que pase a ser el siguiente nodo de la cadena
		aux = aux->next;
		contador++;
	}

	printf("\n¡Fin del tren alcanzado con éxito! (aux llegó a NULL)\n");

	// Limpieza de memoria para evitar leaks en 42
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return (0);
}
*/