/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:42:56 by rubi              #+#    #+#             */
/*   Updated: 2026/06/05 08:26:36 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
// 1. Función f: Recibe un string, lo duplica con ft_strdup
//  y lo pasa a mayúsculas
void	*duplicate_and_uppercase(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	if (!str)
		return (NULL);
	// Duplicamos para que la nueva lista tenga su propia memoria
	new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return ((void *)new_str);
}

// 2. Función del: Se encarga de liberar el contenido de un nodo
void	free_node_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lista_origen;
	t_list	*lista_nueva;
	t_list	*aux;

	// Creamos la lista original: "perro" -> "gato" -> "loro"
	lista_origen = ft_lstnew("perro");
	ft_lstadd_back(&lista_origen, ft_lstnew("gato"));
	ft_lstadd_back(&lista_origen, ft_lstnew("loro"));

	printf("--- LISTA ORIGINAL ---\n");
	aux = lista_origen;
	while (aux)
	{
		printf("Contenido: %s\n", (char *)aux->content);
		aux = aux->next;
	}

	// Ejecutamos ft_lstmap
lista_nueva=ft_lstmap(lista_origen,duplicate_and_uppercase,free_node_content);

	printf("\n--- NUEVA LISTA (Mapeada en Mayúsculas) ---\n");
	aux = lista_nueva;
	if (!aux)
		printf("Error: ft_lstmap devolvió NULL o falló la asignación.\n");
	while (aux)
	{
		printf("Contenido: %s\n", (char *)aux->content);
		aux = aux->next;
	}

	// Liberación de memoria obligatoria
	// En la de origen solo liberamos los nodos 
	// (el contenido son strings fijos de solo lectura)
	ft_lstclear(&lista_origen, NULL);
	// En la nueva liberamos nodos Y contenidos 
	// (porque usamos ft_strdup dentro de f)
	ft_lstclear(&lista_nueva, free_node_content);

	return (0);
}
*/