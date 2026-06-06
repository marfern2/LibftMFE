/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:24:40 by rubi              #+#    #+#             */
/*   Updated: 2026/06/05 01:40:09 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*ultimo;

	// 1. Creamos tres nodos independientes usando ft_lstnew
	nodo1 = ft_lstnew("Primer nodo");
	nodo2 = ft_lstnew("Segundo nodo");
	nodo3 = ft_lstnew("Último nodo (Objetivo)");

	// 2. Los enlazamos de forma manual 
	// para crear la lista: nodo1 -> nodo2 -> nodo3 -> NULL
	nodo1->next = nodo2;
	nodo2->next = nodo3;

	printf("--- Prueba 1: Lista con 3 elementos ---\n");
	// 3. Llamamos a tu función para que busque el último
	ultimo = ft_lstlast(nodo1);
	if (ultimo)
		printf("El contenido del último nodo es: %s\n", (char *)ultimo->content);
	else
		printf("Error: ft_lstlast devolvió NULL\n");

	printf("\n--- Prueba 2: Lista vacía (NULL) ---\n");
	// 4. Caso extremo: Si la lista está vacía,
	//  debe devolver NULL de forma segura sin romper
	ultimo = ft_lstlast(NULL);
	if (ultimo == NULL)
		printf("OK: Responde devolviendo NULL si la lista está vacía.\n");
	else
		printf("KO: Debería haber devuelto NULL.\n");

	// Liberamos la memoria de los nodos para evitar leaks
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return (0);
}
*/