/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marfern2 <marfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 22:05:36 by marfern2          #+#    #+#             */
/*   Updated: 2026/06/03 22:39:29 by marfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*siguiente;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		siguiente = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = siguiente;
	}
}

/*
void	borrar_contenido(void *contenido)
{
	printf("[clear] Destruyendo mercancía: \"%s\"\n", (char *)contenido);
	free(contenido);
}

void ft_add_front_internal(t_list **lst, t_list *new) 
{ 
	ft_lstadd_front(lst, new); 
}
void ft_clear_internal(t_list **lst, void (*del)(void *)) {
	ft_lstclear(lst, del);
}

int	main(void)
{
	// Creamos una lista con 3 vagones de textos dinámicos
	t_list *mi_lista = NULL;

	ft_add_front_internal(&mi_lista, ft_lstnew(strdup("Vagón 3 (Cola)")));
	ft_add_front_internal(&mi_lista, ft_lstnew(strdup("Vagón 2 (Medio)")));
	ft_add_front_internal(&mi_lista, ft_lstnew(strdup("Vagón 1 (Cabeza)")));

	printf("--- ESTADO INICIAL ---\n");
	printf("Dirección del inicio de la lista: %p\n\n", mi_lista);

	printf("--- EJECUTANDO FT_LSTCLEAR ---\n");
	//Pasamos dirección del puntero (&mi_lista) para que pueda ponerlo a NULL
	ft_clear_internal(&mi_lista, borrar_contenido);

	printf("\n--- ESTADO FINAL ---\n");
	printf("Dirección de mi_lista en el main: %p\n", mi_lista);
	if (mi_lista == NULL)
		printf("La lista se ha quedado en NULL y no hay Memory Leaks.\n");

	return (0);
}
*/