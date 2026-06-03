/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 21:23:50 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 21:50:47 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	aux = *lst;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
}

/*
int	main(void)
{
	// Creamos la lista vacía
	t_list	*mi_lista = NULL;

	// Fabricamos 3 nodos independientes
	t_list	*nodo1 = ft_lstnew("Primer vagón (A)");
	t_list	*nodo2 = ft_lstnew("Segundo vagón (B)");
	t_list	*nodo3 = ft_lstnew("Tercer vagón (C)");

	// Los añadimos por detrás (add_back)
	ft_lstadd_back(&mi_lista, nodo1);
	ft_lstadd_back(&mi_lista, nodo2);
	ft_lstadd_back(&mi_lista, nodo3);

	// --- RECORREMOS PARA VERIFICAR EL ORDEN ---
	printf("--- RECORRIENDO EL TREN (AÑADIDO POR DETRÁS) ---\n\n");
	
	t_list	*aux = mi_lista;
	int		i = 1;
	
	while (aux != NULL)
	{
		printf("Posición %d -> Contenido: %s\n", i, (char *)aux->content);
		aux = aux->next;
		i++;
	}

	// Limpieza de memoria (Obligatorio en 42)
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return (0);
}
*/