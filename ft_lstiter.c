/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubi <marfern2@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 01:24:00 by rubi              #+#    #+#             */
/*   Updated: 2026/06/05 01:37:34 by rubi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// Función auxiliar que aplicaremos a cada nodo.
// Modifica la primera letra de la cadena a mayúscula.
void	capitalize_content(void *content)
{
	char	*str;

	str = (char *)content;
	if (str && str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
}

/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*aux;

	// Declaracion predefinida para evitar fallos de memoria (Segmentation fault)
	char	txt1[] = "madrid";
	char	txt2[] = "barcelona";
	char	txt3[] = "malaga";

	// 1. Creamos los nodos
	nodo1 = ft_lstnew(txt1);
	nodo2 = ft_lstnew(txt2);
	nodo3 = ft_lstnew(txt3);

	// 2. Los enlazamos: nodo1 -> nodo2 -> nodo3
	nodo1->next = nodo2;
	nodo2->next = nodo3;

	// 3. Imprimimos el estado inicial
	printf("Antes de ft_lstiter:\n");
	printf("Nodo 1: %s | Nodo 2: %s | Nodo 3: %s\n\n", txt1, txt2, txt3);

	// 4. Ejecutamos tu función sobre la lista
	ft_lstiter(nodo1, capitalize_content);

	// 5. Comprobamos los cambios
	printf("Después de ft_lstiter:\n");
	printf("Nodo 1: %s | Nodo 2: %s | Nodo 3: %s\n", 
		(char *)nodo1->content, (char *)nodo2->content, (char *)nodo3->content);

	// Liberamos la memoria de la estructura de la lista
	free(nodo1);
	free(nodo2);
	free(nodo3);

	return (0);
}
*/